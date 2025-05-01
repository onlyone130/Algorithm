#include <iostream>
#include <cstring>

//모음의 개수
using namespace std;

const int NMAX = 101;

char buf[NMAX];

int main(){
    cin.getline(buf, NMAX);

    int cnt = 0;

    for(int i = 0; i < sizeof(buf); i++){
        if(buf[i] == 'a' || buf[i] == 'e' || buf[i] == 'i' || buf[i] == 'o' || buf[i] == 'u'){
            cnt++;
        }
    }

    cout << cnt << '\n';
}