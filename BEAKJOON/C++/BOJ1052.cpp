#include<iostream>

//물병
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int ans = 0;

    for(;;ans++){
        int cnt = 0;
        int tmp = n;

        while(tmp != 0){
            if(tmp % 2){
                cnt++;
            }
            tmp /= 2;
        }
        if(cnt <= k){
            break;
        }
        n++;
    }
    cout << ans << '\n';
}