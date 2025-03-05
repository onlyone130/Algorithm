#include <iostream>

//평균
using namespace std;

const int NMAX = 1000;

int main(){
    int n;
    int ary[NMAX];
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> ary[i];
    }

    long sum = 0, max = 0;

    for(int i = 0; i < n; i++){
        if(ary[i] > max){
            max = ary[i];
        }
        sum = sum + ary[i];
    }

    double avg = sum * 100.0 / max / n;
    cout << avg << '\n';
}