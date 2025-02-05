#include <iostream>

//구간 합 구하기5
using namespace std;

int sum[1025][1025],dp[1025][1025];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,m;
    cin >> n >> m;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> sum[i][j];
            dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + sum[i][j];
        }
    }
    int prefix;

    for(int i=0;i<m;i++){
        int x1,y1,x2,y2;
        cin >> x1 >> y1;
        cin >> x2 >> y2;

    prefix = dp[x2][y2] - dp[x1-1][y2] - dp[x2][y1-1] + dp[x1-1][y1-1];
    cout << prefix << '\n';
    }
    return 0;
}