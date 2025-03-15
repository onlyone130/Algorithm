#include <iostream>
#include <string>

//그대로 출력하기 2
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;
    /*
    공백을 포함해서 한 줄만 출력이 되는 코드.
    getline(cin, str);
    cout << str;
    */
    while(getline(cin,str)){
        cout << str << endl;
    }
}