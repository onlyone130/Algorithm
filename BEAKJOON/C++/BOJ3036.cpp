#include <iostream>
#include <vector>
#include <numeric>

//링
using namespace std;

int n;
vector<int> v;

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    int ring1 = v[0];
    for(int i = 1; i < n; i++){
        int ring = v[i];
        int max = gcd(ring1, ring);
        cout << ring1 / max << "/" << ring / max << '\n';
    }

    return 0;
}