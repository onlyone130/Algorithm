#include <iostream>
#include <algorithm>

//내려가기
using namespace std;

int main() {
    int n;
    cin >> n;

    int prev_max[3], curr_max[3];
    int prev_min[3], curr_min[3];

    // 첫 줄 입력
    cin >> prev_max[0] >> prev_max[1] >> prev_max[2];

    prev_min[0] = prev_max[0];
    prev_min[1] = prev_max[1];
    prev_min[2] = prev_max[2];

    for (int i = 1; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        curr_max[0] = max(prev_max[0], prev_max[1]) + a;
        curr_max[1] = max({prev_max[0], prev_max[1], prev_max[2]}) + b;
        curr_max[2] = max(prev_max[1], prev_max[2]) + c;

        curr_min[0] = min(prev_min[0], prev_min[1]) + a;
        curr_min[1] = min({prev_min[0], prev_min[1], prev_min[2]}) + b;
        curr_min[2] = min(prev_min[1], prev_min[2]) + c;

        // 갱신
        for (int j = 0; j < 3; j++) {
            prev_max[j] = curr_max[j];
            prev_min[j] = curr_min[j];
        }
    }

    int max_result = max({prev_max[0], prev_max[1], prev_max[2]});
    int min_result = min({prev_min[0], prev_min[1], prev_min[2]});

    cout << max_result << " " << min_result << '\n';
    return 0;
}


/*
#include <iostream>
#include <algorithm>

//내려가기
using namespace std;

int main() {
    int n;
    cin >> n;

    int ary[100001][3];     // 입력값 저장
    int dp_max[100001][3];  // 최대값용 DP 테이블
    int dp_min[100001][3];  // 최소값용 DP 테이블

    for (int i = 0; i < n; i++) {
        cin >> ary[i][0] >> ary[i][1] >> ary[i][2];
    }

    // 초기값 설정
    dp_max[0][0] = dp_min[0][0] = ary[0][0];
    dp_max[0][1] = dp_min[0][1] = ary[0][1];
    dp_max[0][2] = dp_min[0][2] = ary[0][2];

    // DP 계산
    for (int i = 1; i <= n; i++) {
        dp_max[i][0] = max(dp_max[i - 1][0], dp_max[i - 1][1]) + ary[i][0];
        dp_max[i][1] = max({dp_max[i - 1][0], dp_max[i - 1][1], dp_max[i - 1][2]}) + ary[i][1];
        dp_max[i][2] = max(dp_max[i - 1][1], dp_max[i - 1][2]) + ary[i][2];

        dp_min[i][0] = min(dp_min[i - 1][0], dp_min[i - 1][1]) + ary[i][0];
        dp_min[i][1] = min({dp_min[i - 1][0], dp_min[i - 1][1], dp_min[i - 1][2]}) + ary[i][1];
        dp_min[i][2] = min(dp_min[i - 1][1], dp_min[i - 1][2]) + ary[i][2];
    }

    int max_result = max({dp_max[n - 1][0], dp_max[n - 1][1], dp_max[n - 1][2]});
    int min_result = min({dp_min[n - 1][0], dp_min[n - 1][1], dp_min[n - 1][2]});

    cout << max_result << " " << min_result << '\n';

    return 0;
}
*/