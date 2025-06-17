#include <iostream>
#include <unordered_map>
#include <algorithm>

//과일 탕후루
using namespace std;

const int NMAX = 200000;

int n;
int ary[NMAX];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> ary[i];
    }

    unordered_map<int, int> count;
    int answer = 0;
    int l = 0;

    for (int r = 0; r < n; r++) {
        count[ary[r]]++;

        // 과일 종류가 3개 이상이면 왼쪽 포인터를 이동
        while (count.size() > 2) {
            count[ary[l]]--;
            if (count[ary[l]] == 0) {
                count.erase(ary[l]);
            }
            l++;
        }

        answer = max(answer, r - l + 1);
    }

    cout << answer << '\n';
    return 0;
}