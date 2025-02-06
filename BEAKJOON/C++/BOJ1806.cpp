#include <iostream>

//부분합
using namespace std;

const int NMAX = 10020;

int arr[NMAX];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,s;
    cin >> n >> s;

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int left = 0, right = 0, sum = 0, cnt = 0;

    while (right <= n){
        if(sum<s){
            sum += arr[right];
            right++;
        } else if(sum>s){
            sum -= arr[left];
            left++;
        } else {
            cnt++;
            sum -= arr[left];
            left++;
        }
    }
    cout << cnt << '\n';
    return 0;
}