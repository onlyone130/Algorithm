#include <iostream>

//2진수 8진수
using namespace std;

int main(){
    string bin;
    cin >> bin;

    int len = bin.length();

    string oct = "";
    if (len % 3 == 1) bin = "00" + bin;
    else if (len % 3 == 2) bin = "0" + bin;

    for (int i = 0; i < bin.length(); i += 3) {
        int num = (bin[i] - '0') * 4 + (bin[i + 1] - '0') * 2 + (bin[i + 2] - '0') * 1;
        oct += to_string(num);
    }
    
    cout << oct << '\n';
    return 0;
}