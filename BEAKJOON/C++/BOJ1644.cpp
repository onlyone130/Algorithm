#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

//소수의 연속합
using namespace std;

int n, cnt;
vector<bool> isPrime;
vector<int> prime;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    isPrime.resize(n + 2, true);

    for(int i = 2; i * i <= n; i++){
        for(int j = i * 2; j <= n; j += i){
            isPrime[j] = false;
        }
    }

    for(int i = 2; i <= n; i++){
        if(isPrime[i]){
            prime.push_back(i);
        }
    }

    int start = 0, end = 0, sum = 0;

    while(1){
        if(sum > n){
            sum -= prime[start++];
        } else if(end == prime.size()){
            break;
        } else {
            sum += prime[end++];
        }
        if(sum == n){
            cnt++;
        }
    }

    cout << cnt << '\n';

    return 0;
}