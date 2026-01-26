#include <iostream>

// 마법사 상어와 토네이도
using namespace std;

const int NMAX = 506;

int n;
int map[NMAX][NMAX];
pair<int,int> start;

int dy[4] = {0, 1, 0, -1};
int dx[4] = {-1, 0, 1, 0};

int sandPer[9] = {1,1,7,7,10,10,2,2,5};

int sy[9] = {-1, 1, -1, 1, -1, 1, -2, 2, 0};
int sx[9] = { 1, 1,  0, 0, -1, -1,  0, 0, -2};

int moveLen = 1, dir = 0, turn = 0, ans = 0;

void spread(int y, int x, int d){
    int sand = map[y][x];
    int remain = sand;
    map[y][x] = 0;

    for(int i=0;i<9;i++){
        int ny = y + sy[i];
        int nx = x + sx[i];

        for(int r=0;r<d;r++){
            int tmp = ny - y;
            ny = y - (nx - x);
            nx = x + tmp;
        }

        int s = sand * sandPer[i] / 100;
        remain -= s;

        if(ny<0||ny>=n||nx<0||nx>=n) ans += s;
        else map[ny][nx] += s;
    }

    int ay = y + dy[d];
    int ax = x + dx[d];

    if(ay<0||ay>=n||ax<0||ax>=n) ans += remain;
    else map[ay][ax] += remain;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> map[i][j];

    start = {n/2, n/2};

    while(!(start.first==0 && start.second==0)){
        for(int i=0;i<moveLen;i++){
            int ny = start.first + dy[dir];
            int nx = start.second + dx[dir];

            if(map[ny][nx]) spread(ny,nx,dir);
            start = {ny,nx};
            if(start.first==0 && start.second==0) break;
        }

        dir = (dir+1)%4;
        if(++turn==2){
            turn=0;
            moveLen++;
        }
    }

    cout << ans << '\n';
}