#include <iostream>
#include <algorithm>

//차이를 최대로
using namespace std;

int solve(int ary[], int n) {
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += abs(ary[i] - ary[i + 1]);  // 차이의 합 계산
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    int ary[n];

    for (int i = 0; i < n; i++) {
        cin >> ary[i];
    }

    sort(ary, ary + n);
    int sum = 0;

    do {
        sum = max(sum, solve(ary, n));
    } while (next_permutation(ary, ary + n));

    cout << sum << '\n';

    return 0;
}
