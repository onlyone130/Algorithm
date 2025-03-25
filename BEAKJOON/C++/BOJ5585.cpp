#include <iostream>

//거스름돈
using namespace std;

int main(){
    int n;
    cin >> n;
    int money = 1000 - n;

    int change[] = {500,100,50,10,5,1};
    int cnt = 0;

    for(int i = 0; i < size(change); i++){
        cnt += money/change[i];
        money %= change[i];
    }
    cout << cnt << '\n';
}