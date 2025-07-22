#include <iostream>

//빠른 A+B
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n, a, b;
    cin >> n;
    int ary[n][2];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 2; j++){
            cin >> ary[i][j];
        }
    }
    
    for(int i = 0; i < n; i++){
        cout << ary[i][0] + ary[i][1] << '\n';
    }
}