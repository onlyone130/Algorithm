#include <iostream>

//돌 게임 5
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;
    cin >> n;

    if (n % 2 == 0) {
        cout << "CY" << '\n'; // 짝수면 CY 이김
    } else {
        cout << "SK" << '\n'; // 홀수면 SK 이김
    }

    return 0;
}