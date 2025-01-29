#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int cnt = 0;
    
    for (int i = 0; i < n; i++)
    {
        int a;
        std::cin >> a;
        
        if (a < 2) continue; 

        bool prime = true; 
        
        for (int j = 2; j * j <= a; j++)
        {
            if (a % j == 0)
            {
                prime = false;
                break;
            }
        }

        if (prime)
        {
            cnt++;
        }
    }
    
    std::cout << cnt << '\n';
    return 0;
}
