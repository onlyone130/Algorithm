#include <iostream>

//A → B
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int cnt = 1;

    while(a<b){
        if(b%2==0){
            b /= 2;
        } else {
            if(b %10 == 1){
                b /= 10;
            } else {
                break;
            }
        }   
        cnt ++;
    }
    if(a!=b){
        cout << "-1" << '\n';
    } else {
        cout << cnt << '\n';
    }
}