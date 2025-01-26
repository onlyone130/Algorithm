#include <iostream>
#include <string>

int main(){
    int n;
    std::cin >> n;
    std::string str;

    for (int i = 0; i < n; i++)
    {
        std::cin >> str;
        std::cout << str[0] << str[str.length()-1] << '\n';
    }
    return 0;
}