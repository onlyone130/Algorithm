#include <iostream>
#include <algorithm>
#include <vector>

//단어 정렬
using namespace std;

bool compare(string a, string b){
    if(a.size() == b.size()){
        return a < b;
    } else {
        return a.size() < b.size();
    }
}

int main(){
    int n;
    cin >> n;

    vector<string> v;
    string k;

    for(int i = 0; i < n; i++){
        cin >> k;
        v.push_back(k);
    }

    sort(v.begin(), v.end(), compare);

    string str = "";
    for(auto i : v){
        if(str != i){
            cout << i << '\n';
        }
        str = i;
    }
    return 0;
}