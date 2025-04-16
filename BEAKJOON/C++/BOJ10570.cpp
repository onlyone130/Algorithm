#include <iostream>

//Favorite Number
using namespace std;

int main(){
    int n, v, s;
    cin >> n; //테스트 케이스 n

    while(n--){
        int v;
        cin >> v;
        int cnt[1001] = {0};

        for(int i = 0; i < v; i++){
            cin >> s;
            cnt[s]++;
        }
        int max = 0;
        int ans;

        for(int i = 1; i <= 1000; i++){
            if(cnt[i] > max){
                max = cnt[i];
                ans = i;
            } else if(cnt[i] == max && i < ans){
                ans = i;
            }
        }
        cout << ans << '\n';
    } 
    return 0;
}