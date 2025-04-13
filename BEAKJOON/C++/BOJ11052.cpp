#include <iostream>
#include <vector>

//카드 구매하기
using namespace std;

int n;
vector<int> v;

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    vector<int> dp(n + 1, 0);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            dp[i] = max(dp[i], dp[i - j] + v[j-1]);
        }
    }

    cout << dp[n] << '\n';
}