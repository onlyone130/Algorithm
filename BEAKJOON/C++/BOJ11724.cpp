#include <iostream>
#include <vector>

//연결 요소의 개수
using namespace std;

void dfs(int curr, const vector<vector<int>>& graph, vector<char>& visited) {
    visited[curr] = 1;
    for (int next : graph[curr]) {
        if (!visited[next]) {
            dfs(next, graph, visited);
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> graph(n + 1);
    vector<char> visited(n + 1, 0);

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            dfs(i, graph, visited);
            cnt++;
        }
    }

    cout << cnt << '\n';
}