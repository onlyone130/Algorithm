#include <iostream>

//곱셈
using namespace std;


long a,b,c;


long pow(long a, long exp){
    if(exp == 1){
        return a%c;
    }
    long tmp = pow(a, exp/2);

    if(exp%2 == 1){
        return (tmp*tmp%c)*a%c;
    }
    return tmp*tmp%c;
}
int main(){
    cin >> a >> b >> c;
    cout << pow(a,b) << '\n';
}