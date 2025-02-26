#include <iostream>
#include <algorithm>

//N번째 큰 수
using namespace std;

int n;
int ary[10];

int main(){
    cin >> n;

    for (int i=0;i<n;i++) {
        for (int j=0;j<10;j++) {
            cin >> ary[j];
        }
        sort(ary,ary+10);
        cout << ary[7] << '\n';
    }
}