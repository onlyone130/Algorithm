// [3] 2 1 4 5
//백준 20922 - 겹치는 건 싫어

#include <iostream>

const int NMAX = 1001010;
const int MOD = 998244353;
const long LINF = 1e18;

int A[NMAX];
int cnt[NMAX];

void solve(){
    int n,k;
    std::cin >> n >> k;
    for (int i = 0; i <= n; i++){
        std::cin >> A[i];
    }
    int l=1, r=0;
    int ans = 0;
    while (r<n){
        r++;
        cnt[A[r]]++;
        //내가 입력한 수가 k개 초과로 나왔는지 검사해야함.
        while (cnt[A[r]]>k){
            //cnt에 있는 l을 하나 빼주고
            cnt[A[l]]--;
            //l을 하나 늘려준다.
            l++;
        }
        ans = std::max(ans, r-l+1);
    }
    std::cout << ans << std::endl;
}

int main() {
    int T = 1;
    for (int i = 1; i <= T; i++) {
        solve();
    }
}

//백준 1806번 - 부분합
