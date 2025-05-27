#include <iostream>
#include <algorithm>

//가장 긴 바이토닉 부분 수열
using namespace std;

const int NMAX = 1001;

int ary[NMAX], len[NMAX], len2[NMAX];

int main(){
    int n;
    cin >> n;

    int ans = 0;

    for(int i = 0; i < n; i++){
        cin >> ary[i];
    }

    for(int i = 0; i < n; i++){
        len[i] = 1;
        for(int j = 0; j < i; j++){
            if(ary[i] > ary[j]){
                len[i] = max(len[i], len[j] + 1);
            }
        }
    }

    for(int i = n; i >= 0; i--){
        len2[i] = 1;
        for(int j = n - 1; j > i; j--){
            if(ary[i] > ary[j]){
                len2[i] = max(len2[i], len2[j] + 1);
            }
        }
    }

    for(int i = 0; i < n; i++){
        int sum = len[i] + len2[i];
        if(sum > ans){
            ans = sum;
        }
    }

    cout << ans - 1;
}