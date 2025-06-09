#include <iostream>
#include <string>
#include <algorithm>

//알파벳
using namespace std;

int r, c;
int cnt;
int alpabet_cnt[26] = {0};
char map[20][20];

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};

void dfs(int y, int x, int cnt2) {
    cnt = max(cnt, cnt2);  // 현재 경로 길이로 최대값 갱신

    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= r || nx < 0 || nx >= c) {
            continue;
        }

        int index = map[ny][nx] - 'A';
        if (alpabet_cnt[index] == 0) {
            alpabet_cnt[index] = 1;
            dfs(ny, nx, cnt2 + 1);
            alpabet_cnt[index] = 0;
        }
    }
}

int main() {
    cin >> r >> c;

    for (int i = 0; i < r; i++) {
        string input_map;
        cin >> input_map;
        for (int j = 0; j < c; j++) {
            map[i][j] = input_map[j];
        }
    }

    alpabet_cnt[map[0][0] - 'A'] = 1;
    dfs(0, 0, 1);

    cout << cnt << '\n';

    return 0;
}