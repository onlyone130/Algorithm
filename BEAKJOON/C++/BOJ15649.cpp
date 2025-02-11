#include <iostream>

using namespace std;

//N과 M (1)
int n,m;
int arr[10];
int use[10];

void solve(int k){
    if(k == m){
        for(int i=0;i<m;i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i=1;i<=n;i++){
        if(use[i]==0){
            arr[k] = i;
            use[i] = 1;
            solve(k+1);
            use[i] = 0;
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    solve(0);   
}