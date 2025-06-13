#include <iostream>
#include <vector>

//트리의 지름
using namespace std;

const int NMAX = 100001;
int n, u, v, cost;
int node, ans;
bool visited[NMAX];
vector<pair<int, int>> g[NMAX];

void dfs(int x, int dist){
    visited[x] = true;

    if(dist > ans){
        ans = dist;
        node = x;
    }
    for(int i = 0; i < g[x].size(); i++){
        int next_node = g[x][i].first;
        int next_dist = g[x][i].second + dist;
        if(!visited[next_node]){
            visited[next_node] = true;
            dfs(next_node, next_dist);
            visited[next_node] = false;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 1; i < n; i++){
        cin >> u >> v >> cost;
        g[u].push_back({v, cost});
        g[v].push_back({u, cost});
    }

    dfs(1, 0);
    ans = 0;
    for(int i = 1; i <= n; i++){
        visited[i] = false;
    }

    dfs(node, 0);
    cout << ans  << '\n';
}