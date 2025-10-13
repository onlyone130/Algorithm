#include <iostream>
#include <vector>
#include <algorithm>

//숫자
using namespace std;

void Answer() {
    long long A, B;
    cin >> A >> B;

    if (A > B) swap(A, B);

    long long count = (B - A > 1) ? B - A - 1 : 0;
    cout << count << '\n';

    for (long long i = A + 1; i < B; i++) {
        cout << i << " ";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Answer();
    return 0;
}