#include <iostream>

//수 정렬하기3
using namespace std;

const int MAX_NUM = 10000; 

int cnt[MAX_NUM + 1] = {0}; 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, num;
    cin >> n;

    for (int i=0; i<n; i++) {
        cin >> num;
        cnt[num]++; 
    }

    for (int i=1; i<=MAX_NUM; i++) {
        while (cnt[i]--) {  
            cout << i << '\n';
        }
    }

    return 0;
}