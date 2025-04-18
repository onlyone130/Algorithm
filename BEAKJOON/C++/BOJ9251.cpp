#include <iostream>
#include <cstring>
#include <vector>

//LCS
using namespace std;

const int NMAX = 1001;

char str1[NMAX];
char str2[NMAX];
vector<vector<int>> dp;

int LCS(int x, int y) {
    if (x < 0 || y < 0) return 0;

    if (dp[x][y] != -1) return dp[x][y];

    if (str1[x] == str2[y]) {
        dp[x][y] = LCS(x - 1, y - 1) + 1;
    } else {
        dp[x][y] = max(LCS(x - 1, y), LCS(x, y - 1));
    }
    return dp[x][y];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> str1 >> str2;

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    dp.assign(len1, vector<int>(len2, -1));

    cout << LCS(len1 - 1, len2 - 1) << '\n';
}
