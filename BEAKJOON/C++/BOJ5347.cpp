#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

//LCM
using namespace std;

typedef long long ll;

ll lcm(ll a, ll b){
    return (a * b) / gcd(a, b);
}

int main(){
    ll n;
    cin >> n;

    vector<pair<int,int>> vec;
    ll a,b;
    
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        vec.push_back(make_pair(a,b));
    }

    for (int i = 0; i < n; i++) {
        ll a = vec[i].first;
        ll b = vec[i].second;
        cout << lcm(a, b) << '\n';
    }
    return 0;
}