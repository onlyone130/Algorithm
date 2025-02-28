#include <iostream>
#include <algorithm>

//세 수
using namespace std;

int main(){
    int ary[3];
    
    for(int i=0;i<3;i++){
        cin >> ary[i];
    }
    sort(ary,ary+3);
    cout << ary[1] << '\n';
}