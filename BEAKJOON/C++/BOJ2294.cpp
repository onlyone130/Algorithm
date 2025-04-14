#include <iostream>
#include <vector>
#include <algorithm>

//동전 2
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> v;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    vector<int> dp(k + 1, 10001);
    dp[0] = 0;

    for(int i = 0; i < n; i++){
        for(int j = v[i]; j <= k; j++){
            dp[j] = min(dp[j], dp[j - v[i]] + 1);
        }
    }

    if(dp[k] == 10001){
        cout << "-1" << '\n';
    } else {
        cout << dp[k] << '\n';
    }

    return 0;
}