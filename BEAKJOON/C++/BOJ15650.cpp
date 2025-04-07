#include <iostream>
#include <vector>

//N과 M(2)
using namespace std;

int n, m;

void solve(int k, int start, vector<int>& ary){
    if(k == m){
        for(int i = 0; i < m; i++){
            cout << ary[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i = start; i <= n; i++){
        ary[k] = i;
        solve(k + 1, i + 1, ary);
    }
}

int main(){
    cin >> n >> m;
    vector<int> ary(m);
    solve(0, 1, ary);
}
