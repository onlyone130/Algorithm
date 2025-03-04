#include <iostream>
#include <string>

//숫자의 합
using namespace std;

int main(){
    int n;
    cin >> n;

    string str;
    cin >> str;

    int sum = 0;

    for(int i = 0; i < str.length(); i++){
        sum += str[i] - '0';
    }

    cout << sum << '\n';
}