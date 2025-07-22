#include <iostream>
#include <cstring>
#include <algorithm>

//LCS 2
using namespace std;

const int NMAX = 1002;

int main(){
    int dp[NMAX][NMAX];
    int a, b;
    string a1, b1;
    string r = " ";

    cin >> a1 >> b1;
    a = a1.size();
    b = b1.size();

    for(int i = 0; i <= a; i++){
        for(int j = 0; j <= b; j++){
            dp[i][j] = 0;
        }
    }

    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            if(a1[i - 1] == b1[j - 1]){
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    int k = a;
    int l = b;

    while(k >= 1 && l >= 1){
        if(dp[k][l] > dp[k - 1][l] && dp[k - 1][l] == dp[k][l - 1] && dp[k][l - 1] == dp[k - 1][l - 1]){
            r += b1[l - 1];
            k--;
            l--;
        } else if(dp[k - 1][l] > dp[k][l - 1] && dp[k - 1][l] == dp[k][l]){
            k--;
        } else if(dp[k - 1][l] < dp[k][l - 1] && dp[k][l - 1] == dp[k][l]){
            l--;
        } else {
            l--;
        }
    }

    reverse(r.begin(), r.end());

    if(dp[a][b] != 0){
        cout << dp[a][b] << '\n' << r << '\n';
    } else {
        cout << "0" << '\n';
    }
    return 0;
}