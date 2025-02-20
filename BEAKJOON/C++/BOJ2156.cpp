#include <iostream>

//포도주 시식
using namespace std;

const int NMAX = 10000;

int a[NMAX];
int dp[NMAX][3];

void solve(){
    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        cin >> a[i];
    }

    //memset(dp,-1,sizeof dp);
    for(int i=1;i<=n;i++){
        dp[i][1] = dp[i - 1][0] + a[i];
        dp[i][2] = dp[i - 1][1] + a[i];
        dp[i][0] = max(dp[i - 1][0], max(dp[i - 1][1], dp[i - 1][2]));
    }
    int ans = max(dp[n][0], max(dp[n][1], dp[n][2]));
    cout << ans << '\n';
}
int main(){
    int t = 1;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}