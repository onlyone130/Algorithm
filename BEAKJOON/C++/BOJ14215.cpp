#include <iostream>

//세 막대
using namespace std;

int a,b,c;

int main(){
    cin >> a >> b >> c;

    int max = 0;
    if(a>b){
            if(b>c){
                max = a;
            } else {
                max = (a>c)?a:c;
            }
    } else {
        max = (b>c)?b:c;
    }
    if(a+b+c-max>max){
            cout << a+b+c << '\n';
    } else {
           cout << (a+b+c-max)*2-1 << '\n';
    }
}