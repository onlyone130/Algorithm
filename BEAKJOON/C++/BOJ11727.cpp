#include <iostream>

//2×n 타일링 2
using namespace std;

int n;
int dp[1001];

void solve(){
    dp[1] = 1;
    dp[2] = 3;

    for(int i = 3; i <= 1000; i++){
        dp[i] = (dp[i - 1] + 2 * dp[i - 2]) % 10007;
    }
}

int main(){
    cin >> n;
    solve();
    cout << dp[n] << '\n';
}