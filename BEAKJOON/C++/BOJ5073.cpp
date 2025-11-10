#include <iostream>
#include <algorithm>

//삼각형과 세 변
using namespace std;

int tri[3];

int main(){
    while(1){
        for(int i = 0 ; i < 3; i++){
            cin >> tri[i];
        }
        if(tri[0] == 0 && tri[0] == tri[1] && tri[0] == tri[2]){
            break;
        }
        
        sort(tri, tri+3);

        if(tri[2] >= tri[1] + tri[0]){
            cout << "Invalid" << '\n';
        } else if(tri[0] == tri[1] && tri[1] == tri[2]){
            cout << "Equilateral" << '\n';
        } else if (tri[0] == tri[1] || tri[1] == tri[2] || tri[0] == tri[2]) {
            cout << "Isosceles" << '\n';
        } else {
            cout << "Scalene" << '\n';
        }
    }
}