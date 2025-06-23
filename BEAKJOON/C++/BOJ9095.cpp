#include <iostream>

//1, 2, 3 더하기
using namespace std;

const int NMAX = 11;

int main(){
    int n;
    cin >> n;

    int dp[NMAX];

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    while(n-- > 0){
        int s;
        cin >> s;
        for(int i = 4; i <= NMAX; i++){
            dp[i] = dp[i - 1]  + dp[i - 2] + dp[i - 3];
        }
        cout << dp[s] << '\n';
    }
}