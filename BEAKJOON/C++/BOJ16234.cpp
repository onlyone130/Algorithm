#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>

// 인구 이동
using namespace std;

int N, L, R;
int board[51][51];
bool visited[51][51];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

// 특정 연합의 좌표들을 저장하고 인구를 이동시키는 함수
bool movePop(int r, int c){
    queue<pair<int, int>> q;
    vector<pair<int, int>> union_list; // 연합 국가 좌표 저장
    
    q.push({r, c});
    union_list.push_back({r, c});
    visited[r][c] = true;
    
    int sum = board[r][c];
    
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if(nx >= 0 && nx < N && ny >= 0 && ny < N && !visited[nx][ny]){
                int diff = abs(board[x][y] - board[nx][ny]);
                if(diff >= L && diff <= R){
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                    union_list.push_back({nx, ny});
                    sum += board[nx][ny];
                }
            }
        }
    }
    
    // 연합이 형성되었다면 인구 갱신
    if(union_list.size() > 1){
        int avg = sum / union_list.size();
        for(auto p : union_list){
            board[p.first][p.second] = avg;
        }
        return true;
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> L >> R;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cin >> board[i][j];
        }
    }

    int days = 0;
    while(true){
        bool moved = false;
        memset(visited, false, sizeof(visited));
        
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                if(!visited[i][j]){
                    if(movePop(i, j)){
                        moved = true; // 한 번이라도 이동이 일어났다면 기록
                    }
                }
            }
        }
        
        if(!moved){
            break; // 더 이상 이동이 없으면 탈출
        }
        days++;
    }

    cout << days << '\n';
    return 0;
}