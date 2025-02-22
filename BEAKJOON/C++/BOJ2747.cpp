#include <iostream>
#include <vector>

//피보나치 수
using namespace std;
typedef long long ll;

vector<ll> memo(91,-1);

ll fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    if(memo[n] != -1){
        return memo[n];
    }
    return memo[n] = fib(n-1)+fib(n-2);
}
int main(){
    int n;
    cin >> n;

    cout << fib(n) << '\n';
}