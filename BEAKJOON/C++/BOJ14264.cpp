#include <iostream>
#include <cmath>

//정육각형과 삼각형
using namespace std;

int main(){
    double l;
    cin >> l;

    cout << fixed;
    cout.precision(9);

    cout << l * l * sqrt(3) / 4;
}