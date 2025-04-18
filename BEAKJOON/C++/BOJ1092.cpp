#include <iostream>
#include <vector>
#include <algorithm>

//배
//시도 7번
using namespace std;

/*
bool compare(int x, int y){
    return x > y;
}
*/

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> v(n); //크레인

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int m;
    cin >> m;

    vector<int> v2(m); //박스

    for(int i = 0; i < m; i++){
        cin >> v2[i];
    }

    sort(v.begin(), v.end(), greater<int>());
    sort(v2.begin(), v2.end(), greater<int>());

    if(v2[0] > v[0]) {
        cout << "-1" << '\n';
        return 0;
    }

    int day = 0;
    vector<bool> mov(m, false);
    int mov_cnt = 0;

    while(mov_cnt < m){
        // int v_idx = 0, v2_idx = 0;

        // while(v2_idx < n){
        //     if(v_idx == v2.size()){
        //         break;
        //     } else if(v2[v2_idx] >= v[v_idx]){
        //         v.pop_back();
        //         v2_idx++;
        //     } else {
        //         v2_idx++;
        //     }
        // }
        int v2_idx = 0;
        for(int i = 0; i < n; i++){
            while(v2_idx < m){
                if(!mov[v2_idx] && v[i] >= v2[v2_idx]){
                mov[v2_idx] = true;
                v2_idx++;
                mov_cnt++;
                break;
                }
                v2_idx++;
            }
        }

        day++;
    }

    cout << day << '\n';

    return 0;
}