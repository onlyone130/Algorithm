#include <iostream>
#include <vector>
#include <algorithm>

//좌표 정렬하기

int main(){
    int n;
    std::cin >> n;

    int x,y;
    std::vector<std::pair<int,int>> cord;

    for (int i = 0; i < n; i++)
    {
        std::cin >> x >> y;
        cord.push_back({x,y});
    }
    sort(cord.begin(), cord.end());
    for (int i = 0; i < n; i++){
        std::cout << cord[i].first << ' ' << cord[i].second << '\n';
    }
    return 0;
}