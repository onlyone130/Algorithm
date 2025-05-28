#include <iostream>
#include <vector>

//스티커
using namespace std;

const int NMAX = 1000010;

int sticker[2][NMAX];
int dp[2][NMAX];

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;

        for(int i = 0; i < 2; i++){
            for(int j = 0; j < n; j++){
                cin >> sticker[i][j];
            }
        }

        dp[0][0] = sticker[0][0];
        dp[1][0] = sticker[1][0];
        if (n >= 2) {
            dp[0][1] = dp[1][0] + sticker[0][1];
            dp[1][1] = dp[0][0] + sticker[1][1];
        }

        for (int i = 2; i < n; i++) {
            dp[0][i] = max(dp[1][i - 1], dp[1][i - 2]) + sticker[0][i];
            dp[1][i] = max(dp[0][i - 1], dp[0][i - 2]) + sticker[1][i];
        }

        cout << max(dp[0][n - 1], dp[1][n - 1]) << '\n';
    }
    return 0;

    /*
    vector<vector<int>> ary1(t), ary2(t);

    for (int i = 0; i < t; i++) {
        int n1, n2;
        cin >> n1;
        ary1[i].resize(n1);
        for (int j = 0; j < n1; j++) {
            cin >> ary1[i][j];
        }

        cin >> n2;
        ary2[i].resize(n2);
        for (int j = 0; j < n2; j++) {
            cin >> ary2[i][j];
        }
    }
    */
}