#include <iostream>
#include <string>

//영화감독 숌
using namespace std;

int main(){
    int n;
    cin >> n;

    int num = 666;
    int cnt = 1;

    while(cnt != n){
        num++;
        string st = to_string(num);
        if(st.find("666") != string::npos){
            cnt++;
        }
    }
    cout << num << '\n';
}