#include <iostream>
#include <vector>
#include <algorithm>

//스타트와 링크
using namespace std;

int teamStats[21][21];
const int INF = 18001;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> teamStats[i][j];

    vector<int> teamMask(n, 0);
    for (int i = n / 2; i < n; i++)
        teamMask[i] = 1;

    int minDiff = INF;
    do {
        vector<int> startTeam, linkTeam;
        for (int i = 0; i < n; i++) {
            if (teamMask[i] == 0)
                startTeam.push_back(i);
            else
                linkTeam.push_back(i);
        }

        int startSum = 0, linkSum = 0;
        for (int i : startTeam) for (int j : startTeam)
            startSum += teamStats[i][j];
        for (int i : linkTeam) for (int j : linkTeam)
            linkSum += teamStats[i][j];

        int diff = abs(startSum - linkSum);
        if (minDiff > diff) minDiff = diff;
    } while (next_permutation(teamMask.begin(), teamMask.end()));

    cout << minDiff << endl;
    return 0;
}