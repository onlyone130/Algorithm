#include <iostream>

//피보나치는 지겨웡~
using namespace std;
typedef long long ll;

int n;
ll fibo[51];


void fib(int n){
    fibo[0] = 1;
    fibo[1] = 1;
    for (int i = 2; i <= 50; i++) {
		fibo[i] = fibo[i - 2] + fibo[i - 1] + 1;
	}
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    fib(n);
    cout << fibo[n] % 1000000007 << '\n';
    return 0;
}