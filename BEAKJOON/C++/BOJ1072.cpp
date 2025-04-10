#include <iostream>

//게임
using namespace std;
typedef long long ll;

int main(){
    ll x, y;
    cin >> x >> y;
    int z = (y * 100) / x; 

    if(z >= 99){
        cout << "-1" << '\n';
        return 0;
    }

    ll low = 1;
    ll high = 1000000000;
    ll ans = -1;

    while(low <= high){
        ll mid = (low + high) / 2;
        int z2 = ((y + mid) * 100) / (x + mid);
        if(z2 > z){
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    cout << ans << '\n';
}