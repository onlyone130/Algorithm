#include <iostream>

//다음 소수
using namespace std;

typedef long long ll;

bool isPrime(ll num){
    if(num <= 1){
        return false;
    }
    if(num == 2 || num == 3){
        return true;
    }
    if(num % 2 == 0 || num % 3 == 0){
        return false;
    }
    for(ll i = 5; i * i <= num; i++){
        if(num % i == 0 || num % (i+2) == 0){
            return false;
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, k;
    cin >> n;

    for(ll i = 0; i < n; i++){
        cin >> k;
        while(!isPrime(k)){
            k++;
        }
        cout << k << '\n';
    }
    
}