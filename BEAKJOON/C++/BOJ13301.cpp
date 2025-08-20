#include <iostream>
#include <vector>

//타일 장식물
using namespace std;

const int NMAX = 10001;

int n;
long long dp[NMAX];

int main(){
    cin >> n;

    dp[1] = 1;
    dp[2] = 1;

    for(int i = 3; i <= n; i++){
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    cout << dp[n] * 2 + (dp[n] + dp[n - 1]) * 2 << '\n';
}