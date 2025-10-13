#include <iostream>
#include <vector>

//수 나누기 게임
using namespace std;

const int MAXX = 1000000;
bool existsNum[MAXX + 1];
int scoreArr[MAXX + 1];
vector<int> players;

void Answer() {
    int N;
    cin >> N;
    players.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> players[i];
        existsNum[ players[i] ] = true;
    }

    for (int i = 0; i < N; i++) {
        int x = players[i];
        long long j = (long long)x * 2;
        for (; j <= MAXX; j += x) {
            if (existsNum[j]) {
                scoreArr[x] += 1;
                scoreArr[j] -= 1;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        int x = players[i];
        cout << scoreArr[x];
        if (i < N - 1) cout << " ";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Answer();
    return 0;
}