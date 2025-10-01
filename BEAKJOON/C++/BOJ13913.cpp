#include <iostream>
#include <vector>
#include <queue>

//숨바꼭질 4    
using namespace std;

const int NMAX = 100001;
bool visited[NMAX];
int s[NMAX];
vector<int> ans;

int bfs(int n, int k){
    queue<pair<int, int>> q;
    q.push(make_pair(n, 0));
    visited[n] = true;

    while(!q.empty()){
        int line = q.front().first;
        int time = q.front().second;
        q.pop();

        if(line == k){
            int idx = line;
            while(idx != n){
                ans.push_back(idx);
                idx = s[idx];
            }
            ans.push_back(n);
            return time;
        }
        if(line + 1 < NMAX && !visited[line + 1]){
            q.push(make_pair(line + 1, time + 1));
            visited[line + 1] = true;
            s[line + 1] = line;
        }
        if(line - 1 >= 0 && !visited[line - 1]){
            q.push(make_pair(line - 1, time + 1));
            visited[line - 1] = true;
            s[line - 1] = line;
        }
        if(line * 2 < NMAX && !visited[line * 2]){
            q.push(make_pair(line * 2, time + 1));
            visited[line * 2] = true;
            s[line * 2] = line;
        }
    }
}

void Answer(){
    int n, k;
    cin >> n >> k;
    cout << bfs(n, k) << '\n';
    for(int i = ans.size() - 1; i >= 0; i--){
        cout << ans[i] << " ";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Answer();
    return 0;
}