#include <iostream>
#include <queue>
#include <climits>
#include <cstring>

//아기 상어
using namespace std;

const int NMAX = 21;

int n;
int ary[NMAX][NMAX];
int dist[NMAX][NMAX];
int dx[] = {1, 0, -1, 0}; // 하, 우, 상, 좌
int dy[] = {0, 1, 0, -1};

int sharkSize = 2;
int eat = 0;  // 먹은 물고기 수
int cnt = 0;  // 총 이동 횟수
int sharkX = -1, sharkY = -1;

int minX, minY, minDist;

struct Pos {
    int x, y;
};

bool isArea(int x, int y) {
    return x >= 0 && y >= 0 && x < n && y < n;
}

bool isEat(int x, int y) {
    return ary[x][y] != 0 && ary[x][y] < sharkSize;
}

bool isAblePos(int x, int y) {
    return ary[x][y] <= sharkSize;
}

void bfs(int x, int y) {
    memset(dist, 0, sizeof(dist));
    queue<Pos> que;
    que.push({x, y});
    
    minX = INT_MAX;
    minY = INT_MAX;
    minDist = INT_MAX;

    while (!que.empty()) {
        Pos p = que.front();
        que.pop();
        int posX = p.x, posY = p.y;

        for (int t = 0; t < 4; t++) {
            int nx = posX + dx[t];
            int ny = posY + dy[t];

            if (isArea(nx, ny) && isAblePos(nx, ny) && dist[nx][ny] == 0) {
                dist[nx][ny] = dist[posX][posY] + 1;

                if (isEat(nx, ny)) {
                    if (minDist > dist[nx][ny]) {
                        minDist = dist[nx][ny];
                        minX = nx;
                        minY = ny;
                    } else if (minDist == dist[nx][ny]) {
                        if (minX > nx || (minX == nx && minY > ny)) {
                            minX = nx;
                            minY = ny;
                        }
                    }
                }

                que.push({nx, ny});
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> ary[i][j];
            if (ary[i][j] == 9) {
                sharkX = i;
                sharkY = j;
                ary[i][j] = 0; // 상어 위치도 빈 공간으로 변경
            }
        }
    }

    while (true) {
        bfs(sharkX, sharkY);

        if (minX != INT_MAX && minY != INT_MAX) {
            eat++;
            ary[minX][minY] = 0;
            cnt += dist[minX][minY];
            sharkX = minX;
            sharkY = minY;

            if (eat == sharkSize) {
                sharkSize++;
                eat = 0;
            }
        } else {
            break;
        }
    }

    cout << cnt << '\n';
    return 0;
}