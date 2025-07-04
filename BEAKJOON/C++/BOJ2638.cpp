#include <iostream>
#include <vector>
#include <cstring>
#include <queue>

//치즈
using namespace std;

const int NMAX = 101;

struct pos{
    int y, x;
};

int ary[NMAX][NMAX];
bool visited[NMAX][NMAX];
int cur[NMAX][NMAX];
int dy[] = {0, 1, 0, -1};
int dx[] = {-1, 0, 1, 0};
int n, m;


void ready(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> ary[i][j];
        }
    }
}

void sp(){
    queue<pos> q;
    q.push({0, 0});

    while(!q.empty()){
        pos now = q.front();

        int y = now.y;
        int x = now.x;

        q.pop();

        if(visited[y][x]){
            continue;
        }

        visited[y][x] = true;

        for(int i = 0; i < 4; i++){
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(ny < 0 || nx < 0 || ny >= n || nx >= m){
                continue;
            }
            
            if(ary[ny][nx] == 1){
                cur[ny][nx]++;
            } else if(!visited[ny][nx]){
                q.push({ny, nx});
            }
        }
    }
}

bool melt(){
    bool melted = false;

    for(int i = 1; i < n - 1; i++){
        for(int j = 1; j < m - 1; j++){
            if(ary[i][j] == 1 && cur[i][j] >= 2){
                ary[i][j] = 0;
                melted = true;
            }
        }
    }
    return melted;
}

void solve(){
    int cnt = 0;

    while(true){
        memset(visited, 0, sizeof(visited));
        memset(cur, 0, sizeof(cur));

        sp();

        bool melted = melt();
        
        if(melted){
            cnt++;
        } else {
            break;
        }
    }
    cout <<  cnt << '\n';
}

int main(){
    ready();
    solve();

    return 0;
}