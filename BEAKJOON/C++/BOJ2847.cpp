#include <iostream>
#include <vector>

//게임을 만든 동준이
using namespace std;

const int NMAX = 101;

int ary[NMAX];

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> ary[i];
    }

    int cnt = 0;

    for(int i = n - 1; i >= 1; i--){
        while(ary[i] <= ary[i - 1]){
            ary[i - 1]--;
            cnt++;
        }
    }
    cout << cnt << '\n';
    
    return 0;

}