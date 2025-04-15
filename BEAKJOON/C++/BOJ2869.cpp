#include <iostream>

//달팽이는 올라가고 싶다
using namespace std;

int main(){
    int a, b, v;
    cin >> a >> b >> v;

    int day = (v - a) / (a - b);

    if((v - a) % (a - b) != 0){
        day ++;
    }

    cout << day + 1 << '\n';
}