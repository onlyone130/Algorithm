#include <iostream>
#include <algorithm>

//정열적인 정렬
using namespace std;

const int NMAX = 500000;

int main(){
    int n;
    cin >> n;
    int ary[NMAX];
    
    for(int i=0;i<n;i++){
        cin >> ary[i];
    }
    sort(ary,ary+n);

    for(int i=0;i<n;i++){
    cout << ary[i] << " ";
    }
}