#include <iostream>
#include <vector>
#include <algorithm>

//올림픽
using namespace std;

vector<vector<int>> ary;

//금-은-동 순으로 정렬
    bool compare(const vector<int>& a, const vector<int>& b) {
    if (a[1] != b[1]) return a[1] > b[1];  // 금메달 내림차순
    if (a[2] != b[2]) return a[2] > b[2];  // 은메달 내림차순
    return a[3] > b[3];                    // 동메달 내림차순
}

int main(){
    int n,k;
    cin >> n >> k;
    ary.resize(n, vector<int>(4));

    for(int i=0;i<n;i++){
        cin >> ary[i][0];
        cin >> ary[i][1];
        cin >> ary[i][2];
        cin >> ary[i][3];
    }

    // 정렬 수행 (compare 함수를 사용하여 정렬)
    sort(ary.begin(), ary.end(), compare);

    int rank=1;

    for (int i = 0; i < n; i++) {
        // 같은 등수 처리 (이전 국가와 메달 개수가 같다면 같은 등수 유지)
        if (i > 0 && ary[i][1] == ary[i - 1][1] &&
            ary[i][2] == ary[i - 1][2] &&
            ary[i][3] == ary[i - 1][3]) {
            // 등수 유지
        } else {
            rank = i + 1; // 새로운 등수 갱신
        }

        // 목표 국가 k의 순위 출력
        if (ary[i][0] == k) {
            cout << rank << '\n';
            break;
        }
    }

    return 0;

}