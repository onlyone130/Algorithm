#include <iostream>

//파스칼의 삼각형
using namespace std;

const int NMAX = 31;

int d[NMAX][NMAX];

int main(){
    int n, k;
    cin >> n >> k;

    for(int i = 0; i < 31; i++){
        d[i][0] = 1;
    }

    for(int i = 1; i < 31; i++){
        for(int j = 1; j <= i; j++){
            d[i][j] = d[i - 1][j - 1] + d[i - 1][j];
        }
    }

    cout << d[n - 1][k - 1] << '\n';
}