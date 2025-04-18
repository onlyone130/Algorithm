#include <iostream>
#include <vector>
#include <algorithm>

//평범한 배낭
using namespace std;

int n, k;
vector<vector<int>> dp(n + 1, vector<int>(k + 1));

//void solve()의 형태로 코드를 쓰면 *max_element와 main안에서 호출하는 solve()에서 오류가 뜬다..
int solve(const vector<int> & w, const vector<int> & v, int k){
    vector<int> dp(k + 1, 0);
    int n = int(w.size());

    for(int i = 0; i < n; i++){
        for(int j = k; j >= w[i]; j--){
            if(j == w[i] || dp[j - w[i]] > 0){
                dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
            }
        }
    }
    return *max_element(dp.begin(), dp.end());
}
int main(){
    cin >> n >> k;
    vector<int> w(n), v(n);

    for (int i = 0; i < n; i++) {
        cin >> w[i] >> v[i];
    }

    int result = solve(w, v, k);
    cout << result << '\n';

    return 0;
}