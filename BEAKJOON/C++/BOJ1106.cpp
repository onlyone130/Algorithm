#include <iostream>
#include <vector>
#include <algorithm>

//호텔
using namespace std;

const int NMAX = 10001;

int c, n;
vector<int> dp(NMAX, 1e9);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> c >> n;

    vector<pair<int, int>> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i].first;
        cin >> v[i].second;
    }

    dp[0] = 0;

    for (int i = 0; i < n; i++) {
    int cost = v[i].first;
    int value = v[i].second;

    for (int j = value; j < NMAX; j++) {
        dp[j] = min(dp[j], dp[j - value] + cost);
    }
}

    //int ans = lower_bound(dp.begin(), dp.end(), c) - dp.begin();
    int ans = 1e9;
    for (int i = c; i < NMAX; i++) {
        ans = min(ans, dp[i]);
    }

    cout << ans << '\n';

    return 0;
}