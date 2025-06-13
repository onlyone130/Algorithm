#include <iostream>
#include <vector>
#include <algorithm>

//트리와 쿼리
using namespace std;

const int NMAX = 100001;

int n, r, q;
int u, v, x;
int ans[NMAX];
bool visited[NMAX];
vector<int> vec[NMAX];

int solve(int c){
    visited[c] = true;

    for(int i = 0; i < vec[c].size(); i++){
        int next = vec[c][i];
        if(!visited[next]){
            ans[c] += solve(next);
        }
    }
    return ans[c];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n >> r >> q;

    for(int i = 0; i < n - 1; i++){
        cin >> u >> v;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }

    for(int i = 1; i <= n; i++){
        ans[i] = 1;
    }

    solve(r);

    for(int i = 0; i < q; i++){
        cin >> x;
        cout << ans[x] << '\n';
    }
}