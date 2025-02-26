#include <iostream>
#include <string>

//숫자의 개수
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;

    int mul;
    mul = a*b*c;
    
    string mulStr = to_string(mul);

    int ary[10] = {};
    
    for(char chr : mulStr){
        ary[chr-'0']++;
    }

    for(int nums : ary){
        cout << nums << '\n';
    }
    return 0;
}