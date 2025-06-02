#include <iostream>

//최대공약수와 최소공배수
using namespace std;

int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b){
    return a * b / gcd(a, b);
}

int main(){
    int n, m;
    cin >> n >> m;

    int result1 = gcd(n, m);
    int result2 = lcm(n, m);
    cout << result1 << '\n' << result2 << '\n';
}