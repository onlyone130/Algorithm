#include <iostream>
#include <vector>

//피보나치 수 7
using namespace std;

typedef long long ll;

vector<ll> memo(100, -1);

ll fib(ll n){
    if(n <= 1){
        return n;
    }
    if(memo[n] != -1){
        return memo[n];
    }
    return memo[n] = fib(n - 1) + fib(n - 2);
    
}
int main(){
    ll n;
    cin >> n;
    memo.resize(n + 1, -1);
    cout << fib(n) << '\n';
}