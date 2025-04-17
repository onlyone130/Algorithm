#include <iostream>
#include <vector>

//만취한 상범
using namespace std;

int main(){
    int t; //테스트 케이스 t
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        vector<bool> v(n + 1, false);
        
        for(int k = 1; k <= n; k++){
            for(int i = k; i <= n; i += k){
                v[i] = !v[i];
            }
        }
        int cnt = 0;
        for(int i = 1; i <= n; i++){
            if(v[i]){
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
    return 0;

}
/*
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // 제곱수 개수 = floor(sqrt(n))
        cout << (int)sqrt(n) << '\n';
    }

    return 0;
}
*/