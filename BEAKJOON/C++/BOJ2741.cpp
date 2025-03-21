#include <iostream>

//N 찍기
using namespace std;

int main(){
    int n;
    cin >> n;

    int cnt = 1;

    while(cnt != n){
        cout << cnt << '\n';
        cnt++;
    }
    cout << n << '\n';
    return 0;
}