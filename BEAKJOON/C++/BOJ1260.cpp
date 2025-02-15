#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

//DFS와 BFS
using namespace std;

vector<int>edges[1005];
bool visited[1005];

void dfs(int cur){
    visited[cur] = 1;
    cout << cur << ' ';
    for(int &nxt:edges[cur]){
        if(visited[nxt]){
            continue;
        } dfs(nxt);
    }
}

void bfs(int start){
    visited[start] = 1;
    queue<int>q;
    q.push(start);
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        cout << cur << ' ';
        for(int &nxt:edges[cur]){
            if(visited[nxt]){
                continue;
            }
            visited[nxt]=1;
            q.push(nxt);
        }
    }
}
int n,m,v;

int main(){
    cin >> n >> m >> v;

    while(m--){
        int u,v;
        cin >> u >> v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }
    for(int i=1;i<=n;i++){
        sort(edges[i].begin(), edges[i].end());
    }
    dfs(v);
    cout << '\n';
    for(int i=1;i<=n;i++){
        visited[i] = 0;
    }
    bfs(v);
    cout << '\n';
    for(int i=1;i<=n;i++){
        visited[i] = 0;
    }
    //bfs(v);
}