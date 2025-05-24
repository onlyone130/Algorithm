#include <iostream>
#include <algorithm>

//가장 긴 증가하는 부분 수열
using namespace std;

const int NMAX = 1001;
int ary[NMAX];
int dp[NMAX];

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> ary[i];
        dp[i] = 1;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            if(ary[i] > ary[j]){
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    int cnt = 0;

    for(int i = 0; i < n; i++){
        cnt = max(cnt, dp[i]);
    }

    cout << cnt << '\n';

    return 0;
}