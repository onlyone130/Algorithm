#include <iostream>

//네 번째 점
using namespace std;

int main(){
    int x = 0;
    int y = 0;
    int xi, yi;

    for(int i = 0; i < 3; i++){
        cin >> xi >> yi;
        x ^= xi;
        y ^= yi;
    }

    cout << x << " " << y << '\n';
    return 0;
}