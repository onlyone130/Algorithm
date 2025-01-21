#include <iostream>

int main(){
    int n;
    std::cin >> n;

    if (n%4==0) {
            if (n%400==0){
                std::cout << "1";
            }else if (n%100==0){
                std::cout << "0";
            }else {
                std::cout << "1";
            }
        }
        else {
            std::cout << "0";
        }
}