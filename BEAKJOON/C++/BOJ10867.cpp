#include <iostream>
#include <algorithm>
#include <vector>

//중복 빼고 정렬하기
using namespace std;

void solve(const vector<int> & v){
    for (int k : v) {
        cout << k << " ";
    }
    cout << endl;
}

int main(){
    int n;
    vector <int> v;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    solve(v);

    return 0;
}