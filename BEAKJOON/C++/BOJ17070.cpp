#include <iostream>
#include <queue>

//파이프 옮기기 1
using namespace std;

const int NMAX = 16;

int n;
int ary[NMAX][NMAX];

struct State{
    int x, y, dir;
};

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> ary[i][j];
        }
    }

    queue<State> q;
    q.push({0, 1, 0}); //(0,1) 시작, 방향은 가로

    int ans = 0;

    while(!q.empty()){
        State cur = q.front();
        q.pop();

        int x = cur.x;
        int y = cur.y;
        int dir = cur.dir;

        if(x == n - 1 && y == n - 1){
            ans++;
            continue;
        }

        //가로 혹은 대각선 -> 가로 이동
        if(dir == 0 || dir == 2){
            int nx = x;
            int ny = y + 1;
            if(ny < n && ary[nx][ny] == 0){
                q.push({nx, ny, 0});
            }
        }

        //세로 혹은 대각선 -> 세로 이동
        if(dir == 1 || dir == 2){
            int nx = x + 1;
            int ny = y;
            if(nx < n && ary[nx][ny] == 0){
                q.push({nx, ny, 1});
            }
        }

        //모든 방향 -> 대각선 이동
        int nx = x + 1;
        int ny = y + 1;
        if(nx < n && ny < n && ary[x][y + 1] == 0 && ary[x + 1][y] == 0 && ary[x + 1][y + 1] == 0){
            q.push({nx, ny, 2});
        }
    }
    cout << ans << '\n';
    return 0;
}