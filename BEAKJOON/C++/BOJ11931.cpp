#include <iostream>
#include <algorithm>

//수 정렬하기 4
using namespace std;

bool compare(int a, int b){
    return a>b;
}
int main(){
    int n;
    cin >> n;

    int ary[n];

    for(int i = 0; i < n; i++){
        cin >> ary[i];
    }

    sort(ary, ary + n, compare);

    for(int i= 0; i < n; i++){
        cout << ary[i] << '\n';
    }
}