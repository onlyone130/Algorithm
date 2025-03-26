#include <iostream>
#include <vector>
#include <algorithm>

//회의실 배정
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second){
        return a.first < b.first;
    } else {
        return a.second < b.second;
    }
}

int main(){
    int n;
    cin >> n;

    vector<pair<int,int>> v;
    int a,b;

    for(int i = 0; i < n; i++){
        cin >> a >> b;
        v.push_back(make_pair(a,b));
    }

    int time = 0;
    int cnt = 0;    
    sort(v.begin(), v.end(), compare);

    for(int i = 0; i < n; i++){
        if(time <= v[i].first){
            cnt++;
            time = v[i].second;
        }
    }
    cout << cnt << '\n';
}