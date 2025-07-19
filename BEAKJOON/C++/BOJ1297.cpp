#include <iostream>
#include <cmath>

//TV 크기
using namespace std;

int main(){
    int d, h, w;
    cin >> d >> h >> w;

    double ratio = sqrt(w * w + h * h);
    double height = d * h / ratio;
    double width = d * w / ratio;

    cout << (int)height << " " << (int)width << '\n';

    return 0;
}