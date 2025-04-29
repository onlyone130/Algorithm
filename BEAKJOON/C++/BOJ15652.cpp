#include <iostream>

//N과 M (4)
using namespace std;

const int NMAX = 9;

int n, m;
int ary[NMAX];

void solve(int num, int k){
    if(k == m){
        for(int i = 0; i < m; i++){
            cout << ary[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i = num; i <= n; i++){
        ary[k] = i;
        solve(i, k + 1);
    }
}

int main(){
    cin >> n >> m;
    solve(1, 0);
}