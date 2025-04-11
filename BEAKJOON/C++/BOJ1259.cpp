#include <iostream>

//팰린드롬수
using namespace std;

int main(){
    int n;

    while(true){
        cin >> n;
        if(n == 0){
            break;
        }
        int n2 = n;
        int reverse = 0;

        while(n != 0){
            int digit = n % 10;
            reverse = reverse * 10 + digit;
            n /= 10;
        }
        if(n2 == reverse){
            cout << "yes" << '\n';
        } else {
            cout << "no" << '\n';
        }
    }
}