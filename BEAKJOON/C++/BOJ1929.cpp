#include <iostream>
#include <cmath>
#include <vector>
#include <sstream> 

bool* primeNum; 

void prime(int n);

int main() {
    int m, n;
    std::cin >> m >> n;

    primeNum = new bool[n + 1]();  

    prime(n);

    std::ostringstream sb;

    for (int i = m; i <= n; i++) {
        if (!primeNum[i]) {
            sb << i << '\n';
        }
    }

    std::cout << sb.str();

    
    delete[] primeNum;

    return 0;
}

void prime(int n) {
    primeNum[0] = primeNum[1] = true; 

    for (int i = 2; i <= std::sqrt(n); i++) {
        if (!primeNum[i]) { 
            for (int j = i * i; j <= n; j += i) {
                primeNum[j] = true;
            }
        }
    }
}
