#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <tuple>

//나이순 정렬
using namespace std;

int main(){
    int n;
    cin >> n;

    //vector<pair<int,string>> vector;
    vector<tuple<int,string>> vector;

    for (int i = 0; i < n; i++) {
        int num;
        string str;
        cin >> num >> str;
        vector.emplace_back(num,str); //벡터에 값 추가
    }
    //sort(vector.begin(), vector.end());

    /*
    for (const auto& p : vector) {
        cout << p.first << " " << p.second << "\n";
    }
    */
    stable_sort(vector.begin(), vector.end(), [](const auto& a, const auto& b) {
        return get<0>(a) < get<0>(b);  //나이순 정렬. 오름차순
    });

    for (const auto& [num,str] : vector) {
        cout << num << " " << str << "\n";
    }
    return 0;
}