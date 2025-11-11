#include <iostream>
#include <vector>
#include <queue>

//줄 세우기
using namespace std;

const int NMAX = 32001;

vector<int> vec[NMAX];
bool visited[NMAX];

void dfs(int node){
    if(visited[node]){
        return;
    }
    for(int i : vec[node]){
        if(!visited[i]){
            dfs(i);
        }
    }
    visited[node] = true;
    cout << node << " ";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    
    for(int i = 0; i <= m; i++){
        int a, b;
        cin >> a >> b;
        vec[b].push_back(a);
    }

    queue<int> qu;

    for(int i = 1; i <= n; i++){
        if(vec[i].empty()){
            visited[i] = true;
            cout << i << " ";
        }
        else {
            qu.push(i);
        }
    }

    while(!qu.empty()){
        int node = qu.front();
        qu.pop();
        
        if(visited[node]){
            continue;
        }
        else {
            dfs(node);
        }
    }
}