#include <iostream>
#include <algorithm>

//Four Squares
using namespace std;

const int NMAX = 50010;

int dp[NMAX];

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        dp[i] = dp[i - 1] + 1;
        for(int j = 1; j * j <= i; j++){
            dp[i] = min(dp[i], dp[i - j * j] + 1);
        }
    }

    cout << dp[n] << '\n';

    return 0;
}