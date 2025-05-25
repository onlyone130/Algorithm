#include <iostream>
#include <algorithm>

//RGB거리 2
using namespace std;

const int NMAX = 1001;
const int INF = 1000 * 1000 + 1;

int ary[NMAX][3];
int dp[NMAX][3];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int ans = INF;

    for(int i = 0; i < n; i++){
        cin >> ary[i][0] >> ary[i][1] >> ary[i][2];
    }

    for(int i = 0; i < 3; i++){
        //int dp[NMAX][3];
        for(int j = 0; j < 3; j++){
            if(j == i){
                dp[0][j] = ary[0][j];
            } else {
                dp[0][j] = INF;
            }
        }
        for(int k = 1; k < n; k++){
            dp[k][0] = min(dp[k - 1][1], dp[k - 1][2]) + ary[k][0];
            dp[k][1] = min(dp[k - 1][0], dp[k - 1][2]) + ary[k][1];
            dp[k][2] = min(dp[k - 1][0], dp[k - 1][1]) + ary[k][2];
        }
        for(int j = 0; j < 3; j++){
            if(j == i){
                continue;
            }
            ans = min(ans, dp[n - 1][j]);
        }
    }
    cout << ans << '\n';
    return 0;
}