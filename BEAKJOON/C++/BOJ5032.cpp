#include <iostream>

int main(){
    int e,f,c;
    std::cin >> e >> f >> c;
    int sum = e+f;
    int tot = 0;
    
    while (sum >= c)
    {
        tot += sum/c;
        sum = sum/c + sum%c;
    }
    std::cout << tot;
}