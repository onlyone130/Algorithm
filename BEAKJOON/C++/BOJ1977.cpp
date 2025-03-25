#include <iostream>

//완전제곱수
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    int cnt = 0;
    int min = 0;

    int pow = 0;
    while(pow * pow <= m){
        if(pow * pow >= n){
            cnt += pow*pow;
            if(min == 0){
                min = pow*pow;
            }
        }
        pow++;
    }
    if(cnt == 0){
        cout << "-1" << '\n';
    } else {
        cout << cnt << '\n' << min << '\n';
    }
}