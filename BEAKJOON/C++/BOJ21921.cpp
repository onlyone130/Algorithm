#include <iostream>

//블로그
using namespace std;
typedef long long ll;

const int NMAX = 1000020;

int arr[NMAX];
int prefix[NMAX];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,x;
    cin >> n >> x;

    for(int i=1;i<=n;i++){
        cin >> arr[i];
        prefix[i] = prefix[i-1] + arr[i]; 
    }

    int max = 0, cnt = 0;

    for(int i=x;i<=n;i++){
        int sum = prefix[i]=prefix[i-x];
        if(sum>max){
            max = sum;
            cnt = 1;
        } else if(sum == max){
            cnt++;
        }
    }

    if(max == 0){
        cout << "SAD" << '\n';
    } else {
        cout << max << '\n' << cnt << '\n';
    }
    return 0;
    
}