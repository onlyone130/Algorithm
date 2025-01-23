#include <iostream>

int main(){
    int n,m;
    std::cin >> n >> m;
    int ary1[n];
    int ary2[m];
    
    for (int i=0;i<n;i++){
        std::cin >> ary1[i];
    }
    for (int i=0;i<m;i++){
        std::cin >> ary2[i];
    }
    std::cout << ary1 << ary2;
}