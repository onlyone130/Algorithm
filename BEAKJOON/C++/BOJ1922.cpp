#include <iostream>
#include <vector>
#include <algorithm>

//네트워크 연결
using namespace std;

int n, m;
vector<pair<int, pair<int, int>>> graph;
int parent[10003];
int ans;

int find(int x){
        if(parent[x] == x){
            return x;
        }
        return parent[x] = find(parent[x]);
    }

    void sum(int x, int y){
        int a = find(x);
        int b = find(y);
        if(a == b){
            return;
        }
        parent[b] = a;
        return;
    }

    bool same_parent(int x, int y){
        int a = find(x);
        int b = find(y);
        if(a == b){
            return true;
        }
        return false;
    }

    void solve(){
        for(int i = 0; i < m; i++){
            if(same_parent(graph[i].second.first, graph[i].second.second) == false){
                sum(graph[i].second.first, graph[i].second.second);
                ans += graph[i].first;
            }
        }
    }

int main(){
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int cost, des, source;
        cin >> source >> des >> cost;
        graph.push_back(make_pair(cost, make_pair(source, des)));
    }

    for(int i = 1; i <= n; i++){
        parent[i] = i;
    }

    sort(graph.begin(), graph.end());
    solve();
    cout << ans << '\n';
    return 0;
}