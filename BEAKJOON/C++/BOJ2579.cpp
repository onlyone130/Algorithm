#include <iostream>
#include <vector>
#include <algorithm>

//계단 오르기
using namespace std;

int n;
vector<int> v;
int dp[301];

int solve(){
    dp[1] = v[1];
    dp[2] = v[1] + v[2];
    dp[3] = max(v[1] + v[3], v[2] + v[3]);

    for(int i = 4; i <= 300; i++){
        dp[i] = v[i] + max(dp[i - 2], dp[i - 3] + v[i - 1]);
    }
    return 0;
}

int main(){
    cin >> n;
    v.push_back(0);
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    solve();
    cout << dp[n] << '\n';
}