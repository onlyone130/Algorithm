#include <iostream>

//쉽게 푸는 문제
using namespace std;

const int NMAX = 1001;

int main(){
    int a,b;
    cin >> a >> b;

    int ary[NMAX];
    int sum = 0, k = 1;

    for(int i = 0; i < NMAX; i++){
        for(int j = 1; j <= i; j++){
            ary[k] = i;
            if(k > 1000){
                break;
            }
            k++;
        }
    }
    for(int i = a; i <= b; i++){
        sum += ary[i];
    }
    cout << sum << '\n';
}