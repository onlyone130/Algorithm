#include <iostream>
#include <cmath>

//앵그리 창영
using namespace std;

int main(){
    double n, w, h, s;
    cin >> n >> w >> h;

    while(n--){
        cin >> s;
        if(s <= w || s <= h || s <= sqrt(w * w + h * h)){
            cout << "DA" << '\n';
        } else {
            cout << "NE" << '\n';
        }
    }
    return 0;
}