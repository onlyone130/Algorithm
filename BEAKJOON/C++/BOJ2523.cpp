#include <iostream>

//별 찍기-13
using namespace std;

int main(){
    int n;
    cin >> n;


    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << "*";
        }
        cout << '\n';
    }

    for(int i=n+1;i<=2*n-1;i++){
        for(int k=n;k>i-n;k--){
            cout << "*";
        }
        cout << '\n';
    }
}