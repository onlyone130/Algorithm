#include <iostream>
#include <vector>

using namespace std;

const int NMAX = 100001;

int n;
bool visited[NMAX];
int parent[NMAX];
vector<int> tree[NMAX];

//트리의 부모 찾기
void find(int num){
    visited[num] = true;

    for(int i = 0; i < tree[num].size(); i++){
        int next = tree[num][i];

        if(!visited[next]){
            parent[next] = num;
            find(next);
        }
    }
}

int main(){
    cin >> n;

    for(int i = 1; i < n; i++){
        int a, b;
        cin >> a >> b;

        tree[a].push_back(b);
        tree[b].push_back(a);
    }

    find(1);

    for(int i = 2; i <= n; i++){
        cout << parent[i] << '\n';
    }
}