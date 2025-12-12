#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

//세 용액
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; 
    cin >> n;

    vector<ll> liquids(n);

    for(int i = 0; i < n; i++){
        cin >> liquids[i];
    }

    sort(liquids.begin(), liquids.end());

    ll closetSum = LLONG_MAX;
    int ans[3] = {-1, -1, -1};

    for(int i = 0; i < n - 2; i++){
        int left = i + 1;
        int right = n - 1;

        while(left < right){
            ll sum = liquids[i] + liquids[left] + liquids[right];
            
            if(abs(sum) < abs(closetSum)){
                closetSum = abs(sum);
                ans[0] = liquids[i];
                ans[1] = liquids[left];
                ans[2] = liquids[right];
            }

            if(sum > 0){
                right--;
            } else {
                left++;
            }
        }
    }
    cout << ans[0] << " " << ans[1] << " " << ans[2] << "\n";
    return 0;
}