#include <iostream>

int main(){
    int n,a,b;
    std::cin >> n;
    int ary[n][2];
    std::ios :: sync_with_stdio (0) ;
    std::cin . tie (0) ;

    for (int i=0; i<n; i++) {
        for (int j=0;j<2;j++){
            std::cin >> ary[i][j];
        }
    }
    for (int i=0;i<n;i++){
        std::cout << ary[i][0] + ary[i][1] << '\n';
    }
}