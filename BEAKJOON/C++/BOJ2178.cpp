#include <iostream>
#include <queue>
#include <string>

//미로 탐색
using namespace std;

const int NMAX = 101;

int ary[NMAX][NMAX];
bool visited[NMAX][NMAX];
int dist[NMAX][NMAX];

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int main(){
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        string line;
        cin >> line;
        for (int j = 0; j < m; j++) {
            ary[i][j] = line[j] - '0';
        }
    }

    queue<pair<int, int>> q;
    q.push({0, 0});
    visited[0][0] = true;
    dist[0][0] = 1;

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        for(int dir = 0; dir < 4; dir++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if(nx < 0 || ny < 0 || nx >= n || ny >= m){
                continue;
            }
            if(visited[nx][ny] || ary[nx][ny] == 0){
                continue;
            }

            visited[nx][ny] = true;
            dist[nx][ny] = dist[x][y] + 1;
            q.push({nx, ny});
        }
    }

    cout << dist[n - 1][m - 1] << '\n';

    return 0;
}