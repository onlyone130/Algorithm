#include <iostream>
#include <vector>
#include <queue>

//최단경로
using namespace std;

const int INF = 987654321;
const int NMAX = 20005;

vector<pair<int, int>> node[NMAX];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
int value[NMAX];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, e, k;
    int u, v, w;

    cin >> n >> e;
    cin >> k;

    for(int i = 0; i < e; i++){
        cin >> u >> v >> w;
        node[u].push_back({v, w});
    }

    for(int i = 1; i <= n; i++){
        value[i] = INF;
    }

    value[k] = 0;

    pq.push(make_pair(0, k));

    while(!pq.empty()){
        int x = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        for(int i = 0; i < node[u].size(); i++){
            int v = node[u][i].first;
            int w = node[u][i].second;

            if(x > value[u]){
                continue;
            }

            if(x + w < value[v]){
                value[v] = x + w;
                pq.push({value[v], v});
            }
        }
    }

    for(int i = 1; i <= n; i++){
        if(value[i] == INF){
            cout << "INF" << '\n';
        } else {
            cout << value[i] << '\n';
        }
    }

    return 0;

}