#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>

//소수 쌍
//플레5 문제
using namespace std;

const int primeSize = 2003;
const int max_size = 51;

bool isprime[primeSize];
bool visited[max_size];
int p[max_size];
vector<int> value;
vector<vector<int>> adj;

void get_prime() {
    fill(isprime, isprime + primeSize, true);
    isprime[0] = isprime[1] = false;
    int limit = (int)sqrt(primeSize);
    for (int i = 2; i <= limit; ++i) {
        if (isprime[i]) {
            for (int j = i * 2; j < primeSize; j += i) {
                isprime[j] = false;
            }
        }
    }
}

// dfs
bool dfs(int cur, int matched) {
    for (int next : adj[cur]) {
        if (next == 0 || next == matched) continue; // 0번, matched번 제외
        if (visited[next])
            continue;
        visited[next] = true;
        if (p[next] == -1 || dfs(p[next], matched)) {
            p[next] = cur;
            return true;
        }
    }
    return false;
}

int main() {
    get_prime();

    int n;
    cin >> n;
    value.resize(n);

    for (int i = 0; i < n; ++i) {
        cin >> value[i];
    }

    // 홀수, 짝수 분리
    vector<int> even, odd;
    for (int i = 0; i < n; ++i) {
        if (value[i] % 2 == 0)
            even.push_back(i);
        else
            odd.push_back(i);
    }

    if (even.size() != odd.size()) {
        cout << "-1\n";
        return 0;
    }

    adj.resize(n);

    // 전체 그래프 만들기
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j) continue;
            if (isprime[value[i] + value[j]])
                adj[i].push_back(j);
        }
    }

    vector<int> ans;

    // value[0]과 연결될 수 있는 후보들 중에서
    for (int matched : adj[0]) {
        memset(p, -1, sizeof(p));
        p[0] = matched;
        p[matched] = 0;
        int match_count = 2;

        for (int i = 1; i < n; ++i) {
            if (i == matched) continue;
            memset(visited, 0, sizeof(visited));
            if (dfs(i, matched)) {
                match_count++;
            }
        }

        if (match_count == n) {
            ans.push_back(value[matched]);
        }
    }

    if (ans.empty())
        cout << "-1\n";
    else {
        sort(ans.begin(), ans.end());
        for (int x : ans)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}
