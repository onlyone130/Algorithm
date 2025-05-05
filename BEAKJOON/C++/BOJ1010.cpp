#include <iostream>
#include <cmath>

//다리 놓기
using namespace std;

typedef long long ll;

ll combination(int &n, int &m){
    if(n == m){
        return 1;
    }
    if(m == 1){
        return n;
    }
    long double result = 1;
    int k = 0;

    for(int i = n; i > 0; i--){
        int d1 = m <= 0 ? 1 : m;
        int d2 = (n - m - k) <= 0 ? 1 : (n - m - k);
        int d3 = d1 * d2;

        if(d3 <= 0){
            d3 = 1;
        }

        result *= i;
        result /= d3;
        n--;
        m--;
        k++;
    }
    return round(result);
}
int main(){
    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;
        cout << combination(m, n) << '\n';
    }
}