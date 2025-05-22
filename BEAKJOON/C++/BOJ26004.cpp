#include <iostream>
#include <string>
#include <vector>

//HI-ARC
using namespace std;

int main(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    /* string target = "HIARC";
    int cnt = 0;
    size_t pos = s.find(target);

    while(pos != string::npos){
        cnt++;
        pos = s.find(target, pos + 1);
    }

    cout << cnt << '\n';
    */

    unordered_map<char, int> f;

    for(char c : s){
        f[c]++;
    }

    string target = "HIARC";
    unordered_map<char, int> target_f;
    for(char c : target){
        target_f[c]++;
    }

    int cnt = INT32_MAX;
    for(auto& [ch, need] : target_f){
        cnt = min(cnt, f[ch] / need);
    }

    cout << cnt << '\n';
    return 0;
}