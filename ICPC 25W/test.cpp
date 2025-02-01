// [3] 2 1 4 5
//백준 20922 - 겹치는 건 싫어

#include <iostream>

const int NMAX = 11010;

int A[NMAX];
int cnt[NMAX];

void solve(){
    int n,k;
    std::cin >> n >> k;
    for (int i = 1; i <= n; i++){
        std::cin >> A[i];
    }
    int l=1, r=1;
    int ans = 0, sum = A[1];
    while (r<=n){
        if (sum >= k) {
            if (l <= n){
                if (A[l] >= 0 && A[l] < NMAX) cnt[A[l]]--;
                sum -= A[l];
                l++;
            }
        } 
        else {
            if (r<n){
                r++;
                sum += A[r];
                if (A[r] < NMAX) cnt[A[r]]++;
            } 
            else break; 
            
        }
        
        if (sum == k) ans++;
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
