#include <iostream>

//피보나치 함수
using namespace std;

int main(){
    int n;
    int dp[41] = {0};
    dp[0] = 0;
    dp[1] = 1;

    for(int i = 2; i < 41; i++){
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    cin >> n;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        if(x == 0){
            cout << 1 << " " << 0 << '\n';
        } else if(x == 1){
            cout << 0 << " " << 1 << '\n';
        } else {
            cout << dp[x - 1] << " " << dp[x] << '\n';
        }
    }
}