#include <iostream>
#include <vector>
#include <algorithm>

//수리공 항승
using namespace std;

int n,l;
int cnt = 0;

int main(){
    cin >> n >> l;

    vector<int> v;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());
    double tape = (int)(v[0] - 0.5 + l);
    cnt++;

    for(int i = 0; i < n; i++){
        if(tape < (int)(v[i] + 0.5)){
            tape = (int)(v[i] - 0.5 + l);
            cnt++;
        }
    }
    cout << cnt << '\n';
    return 0;
}