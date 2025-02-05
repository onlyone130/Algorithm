#include <iostream>

//구간 합 구하기4
using namespace std;
typedef long long ll;

const int NMAX = 100020;

int arr[NMAX];
ll prefixSum[NMAX];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,m;
    cin >> n >> m;

    for(int i=1;i<=n;i++){
        cin >> arr[i];
        prefixSum[i] = prefixSum[i-1]+arr[i];
    }

    int a,b;
    for(int i=0;i<m;i++){
        cin >> a >> b;
        cout << prefixSum[b] - prefixSum[a-1] << '\n';
    }
}