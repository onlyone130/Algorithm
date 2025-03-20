#include <iostream>

//동전 0
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;

    int ary[n];
    for(int i = 0; i < n; i++){
        cin >> ary[i];
    }
    
    int cnt = 0;

    for(int i = n - 1; i >= 0; i--){
        if(ary[i] <= k){
            cnt += k/ary[i];
            k = k % ary[i];
        }
    }
    cout << cnt << '\n';
}