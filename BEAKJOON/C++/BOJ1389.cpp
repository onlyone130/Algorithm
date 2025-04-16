#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

//케빈 베이컨의 6단계 법칙
using namespace std;

bool visit2[101];
vector<int> v[5001];
int cnt = 0;

void bfs(int start, int end){
    queue<pair<int, int>> q;
    q.push({start, 0});
    visit2[start] = true;

    while(!q.empty()){
        int cur = q.front().first;
        int num = q.front().second;
        q.pop();

        if(cur == end){
            cnt = num;
            break;
        }

        for(int i = 0; i < v[cur].size(); i++){
            if(!visit2[v[cur][i]]){
                q.push({v[cur][i], num + 1});
                visit2[v[cur][i]] = true;
            }
        }
    }
}
int main(){
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    
    int min =  98765432;
    int ans = 0;

    for(int i = 1; i <= n; i++){
        int tmp = 0;
        for(int j = 1; j <= n; j++){
            memset(visit2, 0, sizeof(visit2));

            if(i != j){
                bfs(i, j);
                tmp += cnt;
                cnt = 0;
            }
        }
        if(min > tmp){
            min = tmp;
            ans = i;
        }
    }
    cout << ans;
}