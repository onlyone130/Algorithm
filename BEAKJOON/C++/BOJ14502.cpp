#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

//연구소
using namespace std;

void spreadVirus(vector<vector<int>>& tmp, vector<pair<int, int>>& virus, int n, int m){
    queue<pair<int, int>> q;
    for(auto v : virus) q.push(v);

    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int d = 0; d < 4; d++){
            int nx = x + dx[d];
            int ny = y + dy[d];

            if(nx >= 0 && nx < n && ny >= 0 && ny < m){
                if(tmp[nx][ny] == 0){
                    tmp[nx][ny] = 2;
                    q.push({nx, ny});
                }
            }
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> lab(n, vector<int>(m));
    vector<pair<int, int>> blank;
    vector<pair<int, int>> virus;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> lab[i][j];
            if(lab[i][j] == 0) blank.push_back({i, j});
            else if(lab[i][j] == 2) virus.push_back({i, j});
        }
    }

    vector<int> comb(blank.size(), 0);
    fill(comb.end() - 3, comb.end(), 1);

    int maxSafe = 0;

    do{
        vector<vector<int>> tmp = lab;

        //벽 세우기
        for(int i = 0; i < comb.size(); i++){
            if(comb[i]){
                int x = blank[i].first;
                int y = blank[i].second;
                tmp[x][y] = 1;
            }
        }

        //바이러스 퍼뜨리기
        spreadVirus(tmp, virus, n, m);

        //안전 영역 계산
        int safe = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(tmp[i][j] == 0) safe++;
            }
        }

        maxSafe = max(maxSafe, safe);
    } while(next_permutation(comb.begin(), comb.end()));

    cout << maxSafe << endl;
    return 0;
}