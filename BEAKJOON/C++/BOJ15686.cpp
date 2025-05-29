#include <iostream>
#include <vector>
#include <cmath>

//치킨 배달
using namespace std;

const int NMAX = 2147483647;

int n, m;
int ans = NMAX;

struct House {
    int r, c;
};

struct Chicken {
    int r, c;
    bool visited;
};

vector<House> h;
vector<Chicken> c;

void calc() {
    int distance = 0;
    for (int i = 0; i < h.size(); i++) {
        int minDist = NMAX;  // 한 집에 대해 가장 가까운 치킨집 거리
        for (int j = 0; j < c.size(); j++) {
            if (c[j].visited) {
                int hDistance = abs(h[i].r - c[j].r) + abs(h[i].c - c[j].c);
                minDist = min(minDist, hDistance);
            }
        }
        distance += minDist;  // 각 집의 최소 치킨 거리 더함
    }
    ans = min(ans, distance);  // 전체 최소 치킨 거리 갱신
}

void selectChicken(int idx, int cnt) {
    if (cnt == m) {
        calc();
        return;
    }
    for (int i = idx; i < c.size(); i++) {
        if (!c[i].visited) {
            c[i].visited = true;
            selectChicken(i + 1, cnt + 1);  // i + 1로 조합 탐색
            c[i].visited = false;
        }
    }
}

int main() {
    cin >> n >> m;

    int k;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> k;
            if (k == 1) {
                h.push_back({i, j});
            } else if (k == 2) {
                c.push_back({i, j, false});
            }
        }
    }
    selectChicken(0, 0);
    cout << ans << '\n';

    return 0;
}