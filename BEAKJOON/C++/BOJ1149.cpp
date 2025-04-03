#include <iostream>

//RGB거리
using namespace std;

int n;
int dp[1001][3];
int cost[1001][3];

//i번 집은 i+1번과 i-1번과 색이 달라야함.
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> cost[i][j];
        }
    }

    for(int i = 0; i < 3; i++) {
        dp[0][i] = cost[0][i];
    }

    for(int i = 1; i < n; i++){
        dp[i][0] = cost[i][0] + min(dp[i-1][1], dp[i-1][2]);
        dp[i][1] = cost[i][1] + min(dp[i-1][0], dp[i-1][2]);
        dp[i][2] = cost[i][2] + min(dp[i-1][0], dp[i-1][1]);
    }
    cout << min(min(dp[n-1][0], dp[n-1][1]), dp[n-1][2]);
}