#include <iostream>
#include <vector>

//2차원 배열의 합
using namespace std;

int main(){
    int n,m,k;
    cin >> n >> m;

    //누적합 개념 이용
    //int ary[n+1][m+1] = {0};
    // 2d vector 이용 (0으로 초기화)
    vector<vector<int>> ary(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            int num;
            cin >> num;
            ary[i][j] = num + ary[i - 1][j] + ary[i][j - 1] - ary[i - 1][j - 1];
        }
    }

    cin >> k;

    for (int i = 0; i < k; i++) {
        int i1, j1, x, y;
        cin >> i1 >> j1 >> x >> y;
        int sum = ary[x][y] - ary[i1 - 1][y] - ary[x][j1 - 1] + ary[i1 - 1][j1 - 1];
        cout << sum << '\n';
    }
    return 0;
}