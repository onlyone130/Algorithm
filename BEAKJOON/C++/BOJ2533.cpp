#include <iostream>
#include <vector>
#include <queue>

// 사회망 서비스(SNS)
using namespace std;

const int NMAX = 1000001;

int dp[NMAX][2];
vector<int> edges[NMAX];
bool visited[NMAX];
int parent[NMAX];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }

    queue<int> q;
    vector<int> order;

    q.push(1);
    visited[1] = true;
    parent[1] = 0;

    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        order.push_back(cur);

        for (int next : edges[cur]) {
            if (!visited[next]) {
                visited[next] = true;
                parent[next] = cur;
                q.push(next);
            }
        }
    }
    
    for (int i = n - 1; i >= 0; i--) {
        int node = order[i];

        dp[node][0] = 0;
        dp[node][1] = 1;

        for (int next : edges[node]) {
            if (next == parent[node]) continue;

            dp[node][0] += dp[next][1];
            dp[node][1] += min(dp[next][0], dp[next][1]);
        }
    }

    cout << min(dp[1][0], dp[1][1]) << "\n";
}