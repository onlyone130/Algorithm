#include <iostream>

//분수 합
using namespace std;

int gcd(int x, int y){
    if(x % y == 0){
        return y;
    }
    return gcd(y, x % y);
}

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    a = a * d + b * c;
    b = b * d;
    
    int g = gcd(a, b);

    cout << a / g << " " << b / g << '\n';
}