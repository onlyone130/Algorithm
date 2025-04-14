#include <iostream>
#include <vector>
#include <algorithm>

//신입 사원
using namespace std;

vector<vector<vector<int>>> vec;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<pair<int,int>> v(n);

        for(int i = 0; i < n; i++){
            cin >> v[i].first >> v[i].second;
        }

        sort(v.begin(), v.end());

        int cnt = 1;
        int min = v[0].second;

        for(int i = 1; i < n; i++){
            if(v[i].second < min){
                cnt++;
                min = v[i].second;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}