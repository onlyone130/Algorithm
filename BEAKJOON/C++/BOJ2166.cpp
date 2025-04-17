#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip> // 소수점 첫째짜리까지 표시하기 위한 헤더

//다각형의 면적
using namespace std;

typedef long long ll;

struct Point{
    ll x, y;
};

int main(){
    int n;
    cin >> n;
    vector<Point> point(n);

    for(int i = 0; i < n; i++){
        cin >> point[i].x >> point[i].y;
    }

    ll sum = 0, sum2 = 0;

    for(int i = 0; i < n; i++){
        int k = (i + 1) % n;
        sum += point[i].x * point[k].y;
        sum2 += point[i].y * point[k].x;
    }

    double area = abs(sum - sum2)/2.0;
    cout << fixed << setprecision(1) << area << '\n'; // 소수점 첫째자리까지 표시하기 위함.
}