#include <iostream>
#include <vector>

//ABCDE
using namespace std;

static vector<vector<int>> a;
//방문 배열을 vector로 만들기
static vector<bool> visited;
//도착을 했는지 판단
static bool arrive;

void DFS(int now, int depth){
    //return으로 빠져나가면서 이미 도착한 노드가 arrive로 빠져나갈 수도 있기 때문에 다음과 같이 코드 작성
    if(depth == 5 || arrive){
        arrive = true;
        return;
    }
    visited[now] = true;
    
    //현재 노드(a[now])에 연결되어 있는 모든 노드를 for문을 통해서 한 번씩 방문하는 코드
    for(int i : a[now]){
        if(!visited[i]){
            DFS(i, depth + 1);
        }
    }
    visited[now] = false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    arrive = false;
    cin >> n >> m;
    //노드의 개수가 n개니까 사이즈 수정
    a.resize(n);
    visited = vector<bool>(n, false);

    //그래프의 데이터 저장하기
    for(int i = 0; i < m; i++){
        int start, end;
        cin >> start >> end;
        //양방향으로 저장해주어야함.
        a[start].push_back(end);
        a[end].push_back(start);
    }
    //노드마다 DFS 실행
    for(int i = 0; i < n; i++){
        DFS(i, 1);
        if(arrive){
            break;
        }
    }
    if(arrive){
        cout << 1 << '\n';
    } else {
        cout << 0 <<'\n';
    }
}