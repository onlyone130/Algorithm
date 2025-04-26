#include <iostream>

//X보다 작은 수
using namespace std;

const int NMAX = 10001;

int main(){
    int n, x;
    cin >> n >> x;

    int ary[NMAX];

    for(int i = 0; i < n; i++){
        cin >> ary[i];
    }

    for(int i = 0; i < n; i++){
        if(ary[i] < x){
            cout << ary[i] << " ";
        }
    }
}