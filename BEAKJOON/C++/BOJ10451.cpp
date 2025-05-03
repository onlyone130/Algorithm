#include <iostream>
#include <vector>
#include <cstring>

//순열 사이클
using namespace std;

bool visited[1001];

void dfs(int cur, const vector<int> & ary){
    visited[cur] = true;
    int next = ary[cur];
    if(!visited[next]){
        dfs(next, ary);
    }
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> ary(n + 1);
        memset(visited, false, sizeof(visited));

        for(int i = 1; i <= n; i++){
            cin >> ary[i];
        }

        int cnt = 0;
        for(int i = 1; i <= n; i++){
            if(!visited[i]){
                dfs(i, ary);
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}