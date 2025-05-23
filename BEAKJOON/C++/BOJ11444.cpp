/*
#include <iostream>
#include <vector>

//피보나치 수 6
//런타임 에러(length error)
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

vector<ll> memo;

ll fib(int n){
    if (memo.size() <= n){ //함수 내에서 memo 사이즈 할당
        memo.resize(n + 1, -1);
    }
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    if(memo[n] != -1){
        return memo[n];
    }
    return memo[n] = (fib(n - 1) + fib(n - 2)) % MOD;
}
int main(){
    int n;
    cin >> n;

    cout << fib(n) << '\n';
}
*/

#include <iostream>

//피보나치 수6
//분할 정복을 이용한 거듭제곱
using namespace std;

typedef long long ll;
const ll MOD = 1000000007;

struct Matrix {
    ll a, b, c, d;
    Matrix(ll a=1, ll b=1, ll c=1, ll d=0): a(a), b(b), c(c), d(d) {}

    Matrix operator*(const Matrix& other) const {
        return Matrix(
            (a * other.a + b * other.c) % MOD,
            (a * other.b + b * other.d) % MOD,
            (c * other.a + d * other.c) % MOD,
            (c * other.b + d * other.d) % MOD
        );
    }
};

Matrix power(Matrix m, ll n) {
    if (n == 1) return m;
    if (n % 2 == 0) {
        Matrix half = power(m, n / 2);
        return half * half;
    } else {
        return power(m, n - 1) * m;
    }
}

int main() {
    ll n;
    cin >> n;

    if (n == 0) {
        cout << 0 << '\n';
    } else {
        Matrix base;
        Matrix result = power(base, n);
        cout << result.c << '\n';  // F(n)
    }
}