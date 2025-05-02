#include <iostream>

//한수
using namespace std;

bool check(int n){
    int hundred = n / 100;
    int ten = n / 10 % 10;
    int one = n % 10;

    if(hundred - ten == ten - one){
        return true;
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    int ans;
    
    if(n >= 99){
        ans = 99;
    } else {
        ans = n;
    }
     
    for(int i = 100; i <= n; i++){
        if(check(i)){
            ans++;
        }
    }
    
    cout << ans << '\n';

    return 0;
}