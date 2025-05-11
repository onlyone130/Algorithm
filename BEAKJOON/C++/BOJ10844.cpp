#include <iostream>

//쉬운 계단 수
using namespace std;

const int NMAX = 105;

typedef long long ll;

ll dp[NMAX][10];
int n;

void solve(){
    for(int i = 1; i <= 9; i++){
        dp[1][i] = 1;
    }
    for(int i = 2; i <= n; i++){
        for(int j = 0; j <= 9; j++){
            if(j == 0){
                dp[i][j] = dp[i - 1][1];
            } else if(j == 9){
                dp[i][j] = dp[i - 1][8];
            } else {
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j + 1];
            }
            dp[i][j] = dp[i][j] % 1000000000;
        }
    }
    ll ans = 0;
    for(int i = 0; i <= 9; i++){
        ans = ans + dp[n][i];
    }
    ans = ans % 1000000000;
    cout << ans << '\n';
}
int main(){
    cin >> n;

    solve();

    return 0;
}