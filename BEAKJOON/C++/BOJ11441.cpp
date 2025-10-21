#include <iostream>

//합 구하기
using namespace std;

const int NMAX = 100001;

int ary[NMAX];
int sum[NMAX];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        cin >> ary[i];
        sum[i] = ary[i] + sum[i - 1];
    }

    cin >> n;
    while(n--){
        int str, end;
        cin >> str >> end;
        cout << sum[end] - sum[str - 1] << '\n';
    }
}