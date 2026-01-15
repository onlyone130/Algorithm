#include <iostream>
#include <vector>
#include <algorithm>

// 지름길
using namespace std;

const int NMAX = 10001;

int n, d;
vector<pair<int, int>> v[NMAX];
int dist[NMAX];

void input(){
    cin >> n >> d;
    for(int i = 0; i < n; i++){
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
    }
    for(int i = 0; i < NMAX; i++){
        dist[i] = i;
    }
}

void solve(){
    for(int i = 0; i < NMAX; i++){
        if(i != 0){
            dist[i] = min(dist[i], dist[i-1] + 1);
        }
        for(int j = 0; j < v[i].size(); j++){
            dist[v[i][j].first] = min({dist[i] + v[i][j].second, dist[i] + (v[i][j].first - i), dist[v[i][j].first]});
        }
    }
    cout << dist[d] << '\n';
}
int main(){
    input();
    solve();
}