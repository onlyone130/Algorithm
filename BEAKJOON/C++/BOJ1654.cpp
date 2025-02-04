#include <iostream>


using namespace std;
typedef long long ll;


//1654 랜선 자르기
const int NMAX = 202020;
const ll LINF = 1e18;

int arr[NMAX];

int main(){
    int k,n;
    cin >> k >> n;
    for (int i = 0; i < k; i++){
        cin >> arr[i];
    }
    ll l = 1;
    //안전하게 2^31 가져오기 위함
    ll r = (1ll)<<31;

    ll ans;
    while (l <= r)
    {
        ll mid = (l+r)/2;
        ll cnt = 0;
        for(int i=0;i<k;i++){
            cnt += arr[i]/mid;
        }
        if(cnt >= n){
            //일단 답에 충족하니까 값을 넣어준다.
            //답을 고정해놓고 풀고있는거니까, 답인 mid를 넣어주면 된다.
            ans = mid;
            //성공한 상태니까, 널널한 조건으로 갈 필요가 없음. 짧게 잘라주기
            l = mid+1;
        } else {
            r = mid-1;
        }
    }
    cout << ans << endl;
    
}