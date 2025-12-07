#include <iostream>
#include <vector>
#include <deque>
#include <climits>

// 숨바꼭질 3
using namespace std;

const int NMAX = 100001;

int main(){
    int n, k;
    cin >> n >> k;

    //vector<bool> visited(NMAX, false);
    vector<int> time(NMAX, INT_MAX);
    deque<int> q;

    q.push_back(n);
    //visited[n] = true;
    time[n] = 0;

    while (!q.empty()) {
        int current = q.front();
        q.pop_front();

        if (current == k) {
            cout << time[current] << '\n';
            return 0;
        }

        if (current * 2 < NMAX && time[current * 2] > time[current]) {
            time[current * 2] = time[current];
            q.push_front(current * 2);
        }

        if (current - 1 >= 0 && time[current - 1] > time[current] + 1) {
            time[current - 1] = time[current] + 1;
            q.push_back(current - 1);
        }

        if (current + 1 < NMAX && time[current + 1] > time[current] + 1) {
            time[current + 1] = time[current] + 1;
            q.push_back(current + 1);
        }
    }
}