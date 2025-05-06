#include <iostream>

//삼각형 외우기
using namespace std;

int main(){

    int ary[3];
    for(int i = 0; i < 3; i++){
        cin >> ary[i];
    }

    if(ary[0] == 60 && ary[1] == 60 && ary[2] == 60){
        cout << "Equilateral" << '\n';
    } else if(ary[0] + ary[1] + ary[2] == 180 && (ary[0] == ary[1] || ary[1] == ary[2] || ary[2] == ary[0])){
        cout << "Isosceles" << '\n';
    } else if(ary[0] + ary[1] + ary[2] == 180 && ary[0] != ary[1] && ary[1] != ary[2] && ary[2] != ary[0]){
        cout << "Scalene" << '\n';
    } else {
        cout << "Error" << '\n';
    }

    return 0;
}