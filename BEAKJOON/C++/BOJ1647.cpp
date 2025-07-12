#include <iostream>
#include <tuple>
#include <algorithm>

//도시 분할 계획
using namespace std;

const int MAX_V = 100001;
const int MAX_E = 1000001;

int n, m;
int parent[MAX_V];
tuple<int, int, int> edge[MAX_E];

int find(int w){
    if(parent[w] < 0){
        return w;
    }
    return parent[w] = find(parent[w]);
}

bool dif_group(int x, int y){
    x = find(x);
    y = find(y);

    if(x == y){
        return false;
    }
    if(parent[x] == parent[y]){
        parent[x]--;
    }
    if(parent[x] < parent[y]){
        parent[y] = x;
    } else {
        parent[x] = y;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for(int i = 0; i <= n; i++){
        parent[i] = -1;
    }

    for(int i = 0; i < m; i++){
        int a, b, c;
        cin >> a >> b >> c;
        edge[i] = {c, a, b};
    }

    sort(edge, edge + m);

    int cnt = 0;
    int ans = 0;
    int max_cost = 0;

    for(int i = 0; i < m; i++){
        int cost, a, b;
        tie(cost, a, b) = edge[i];
        if(!dif_group(a, b)){
            continue;
        }
        cnt++;
        ans += cost;
        if(cost > max_cost) max_cost = cost;

        if(cnt == n - 1) break;
    }

    cout << ans - max_cost << '\n';

    return 0;
}