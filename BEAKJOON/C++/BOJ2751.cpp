#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    int n;
    std::cin >> n;
    //int ary[n];
    std::vector<int> ary(n);

    for (int i = 0; i < n; i++)
    {
        std::cin >> ary[i];
    }

    std::sort(ary.begin(), ary.end());
    
    for(int i:ary){
        std::cout << i << '\n';
    } 
    return 0;
}