#include <iostream>

//설탕 배달 
using namespace std;

int main(){
    int n;
    cin >> n;

    int cnt = 0;
    while(n>=0){
        if(n%5==0){
            cnt += n/5;
            cout << cnt << '\n';
            return 0;
        }
        n -= 3;
        cnt++;
    }
    cout << "-1" <<'\n';
}