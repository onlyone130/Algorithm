#include <iostream>

//Balanced String
using namespace std;

const int NMAX = 100000;
const int MOD = 16769023;

int dp[NMAX + 1];

void solve(){
    int n;
    cin >> n;
    
    //미리 값을 넣어주어야지 출력이 된다.
    //dp[0][2] = 1; 
    dp[0] = 1;
    dp[1] = 2;

    //dp식 세우기  
    for(int i = 2; i <= n; i++){
        dp[i] = dp[i-2] * 2 % MOD;
    }
    //int ans = (dp[n][0] + dp[n][1] + dp[n][2]) % MOD;
    //cout << ans <<'\n';
    cout << dp[n] << '\n';
}
int main(){
    solve();
    return 0;
}