#include <iostream>
#include <algorithm>
#include <vector>

//이동하기
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    vector<vector<int>>arr(n+1,vector<int>(m+1,0));
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> arr[i][j];
            dp[i][j] = arr[i][j];
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            dp[i][j] = arr[i][j] + max(dp[i-1][j-1],max(dp[i-1][j],dp[i][j-1]));
        }
    }
    
    cout << dp[n][m] << '\n';
}