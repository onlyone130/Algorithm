#include <iostream>


using namespace std;
typedef long long ll;

/*
//1654 랜선 자르기
const int NMAX = 202020;
const ll LINF = 1e18;

int arr[NMAX];

void solve(){
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
*/

//26449번
const int NMAX = 102020;
const int INF = 1e9+7;
const ll LINF = 1e18;


ll A[NMAX], B[NMAX];

void solve(){
    int n,m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        cin >> A[i];
    }
    for (int i = 1; i <= n; i++){
        cin >> B[i];
    }
    //어떤수 x보다 큰 수 중에서 가장 작은 수의 위치를 구하면 된다.
    //47이라는 실력을 가지고 있을 때
    sort(A+1,A+n+1);
    ll ans1=0, ans2=0, ans3=0;
    //배열 B가 아니라 어떤 수 x 정도로 생각하도 상관 없음.
    for(int i=1;i<=m;i++){
        int l=1, r=n;
        int cnt = 0;
        while(l<=r){
            int mid = (l+r)/2;
            if(A[mid]>= B[i]){
                r = mid-1;
            } else {
                //조건 만족. 오른쪽으로 옮겨주기
                cnt = mid;
                l = mid+1;
            }
        }
        //arc 팀의 승리 횟수를 구함.
        ans2 += cnt;
        
    }
    //hi 팀의 승리 횟수 구하기.
    for(int i=1;i<=m;i++){
        int l=1, r=n;
        int cnt = n+1;
        while(l<=r){
            int mid = (l+r)/2;
            if(A[mid] > B[i]){
                cnt = mid;
                r = mid-1;
            } else {
                //조건 만족. 오른쪽으로 옮겨주기
                l = mid+1;
            }
        }
        //arc 팀의 승리 횟수를 구함.
        ans1 += n - cnt + 1;
}

cout << ans1 << " " << ans2 << " " << n*m-ans1-ans2;
}