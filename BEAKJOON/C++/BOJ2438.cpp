#include <iostream>

//별 찍기 - 1
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        cout << '\n';
    }
}