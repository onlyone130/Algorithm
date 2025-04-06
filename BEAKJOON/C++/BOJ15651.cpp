#include <iostream>
#include <vector>

//N과 M(3)
using namespace std;

int n, m;

void solve(int k, vector<int>& ary){
    if(k == m){
        for(int i = 0; i < m; i++){
            cout << ary[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i = 1; i <= n; i++){
        ary[k] = i;
        solve(k + 1, ary);
    }
}

int main(){
    cin >> n >> m;
    vector<int> ary(m);
    solve(0, ary);
}
