#include <iostream>

//대소문자 바꾸기   
using namespace std;

int main(){
    char st[101];
    cin >> st;

    for(int i=0;i<sizeof(st);i++){
        if(st[i] >= 'A' && st[i] <= 'Z'){
            st[i] += 32;
        } else if (st[i] >= 'a' && st[i] <= 'z'){
            st[i] -= 32;
        }
    }
    cout << st << '\n';
    return 0;
}