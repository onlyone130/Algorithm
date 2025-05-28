#include <iostream>

//동물원
using namespace std;

const int MOD = 9901;
typedef long long ll;

int n;

int main(){
    cin >> n;

    ll dp[n + 1][3];
    //1로 초기화
    dp[1][0] = dp[1][1] = dp[1][2] = 1;

    for(int i = 2; i <= n; i++){
        dp[i][0] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2]) % MOD;
        dp[i][1] = (dp[i - 1][0] + dp[i - 1][2]) % MOD;
        dp[i][2] = (dp[i - 1][0] + dp[i - 1][1]) % MOD;
    }

    long ans = (dp[n][0] + dp[n][1] + dp[n][2]) % MOD;
    
    cout << ans << '\n';

    return 0;
}