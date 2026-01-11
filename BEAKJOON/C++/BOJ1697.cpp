#include <iostream>
#include <queue>

// 숨바꼭질
using namespace std;

const int NMAX = 100001;

int main(){
    int n, k;
    queue<pair<int, int>> q;

    int spot[NMAX] = {0};
    bool visited[NMAX] = {false};
    int result[NMAX] = {0};

    cin >> n >> k;

    q.push(pair<int, int>(n, 0));
    while(!q.empty()){
        int now = q.front().first, cnt = q.front().second;
        q.pop();
        if (!visited[now] && (now >= 0 && now < 100001)){
            visited[now] = true;
            if (result[now] == 0)
            {
                result[now] = cnt;
            }
            cnt++;
            q.push(pair<int, int>(now - 1, cnt));
            q.push(pair<int, int>(now + 1, cnt));
            q.push(pair<int, int>(now * 2, cnt));
        }
    }

    cout << result[k] << '\n';

    return 0;
}