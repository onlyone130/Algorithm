#include <iostream>

//어두운 건 무서워
using namespace std;

const int NMAX = 1001;

int num[NMAX][NMAX];
int sum[NMAX][NMAX];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int r, c, q;
    cin >> r >> c >> q;

    for(int i = 1; i <= r; ++i){
        for(int j = 1; j <= c; ++j){
            cin >> num[i][j];
        }  
    }

    for(int i = 1; i <= r; ++i){
        for(int j = 1; j <= c; ++j){
            sum[i][j] = num[i][j] + sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
        }
    }

    while(q--){
        int r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;

        int ans = sum[r2][c2] - sum[r1 - 1][c2] - sum[r2][c1 - 1] + sum[r1 - 1][c1 - 1];
        int pix_num = (r2 - r1 + 1) * (c2 - c1 +1);

        cout << ans/pix_num << '\n';
    }

    return 0;
}