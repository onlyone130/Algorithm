#include <iostream>
#include <algorithm>
#include <vector>

//최소 스패닝 트리
using namespace std;
typedef pair<int, pair<int, int>> T;
const int NMAX = 10001;

int v, e;
vector<T> vec;
int parent[NMAX];
int ans;

int findParent(int x){
    if(parent[x] == x){
        return x;
    }
    return parent[x] = findParent(parent[x]);
}

void unionParent(int a, int b){
    a = findParent(a);
    b = findParent(b);
    parent[b] = a;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> v >> e;

    for(int i = 0; i < e; i++){
        int a, b, c;
        cin >> a >> b >> c;
        vec.push_back({c, {a, b}});
    }

    sort(vec.begin(), vec.end());
    for(int i = 1; i <= v; i++){
        parent[i] = i;
    }

    int cnt = 0;

    for(int i = 0; i < vec.size(); i++){
        T curEdge = vec[i];
        int cost = curEdge.first;
        int cur = curEdge.second.first;
        int next = curEdge.second.second;

        if(findParent(cur) == findParent(next)){
            continue;
        }

        unionParent(cur, next);
        ans += cost;

        if(++cnt == v - 1){
            break;
        }
    }
    cout << ans << '\n';
        
    return 0;
}