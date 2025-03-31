#include <iostream>

//파도반 수열
using namespace std;
typedef long long ll;

int t;
ll dp[101];

void solve(){
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 2;
    dp[5] = 2;

    for(int i = 6; i <= 100; i++){
        dp[i] = dp[i-1] + dp[i-5];
    }
}
int main(){
    cin >> t;
    solve();

    while(t--){
        int n;
        cin >> n;
        cout << dp[n] << '\n';
    }
}