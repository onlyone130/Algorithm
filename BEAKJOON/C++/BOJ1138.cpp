#include <iostream>
#include <vector>

//한 줄로 서기
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> result(n, 0);

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v[i] = a;
    }

    for(int i = 0; i < n; i++){
        int tall = v[i];
        for(int j = 0; j < n; j++){
            if(tall == 0 && result[j] == 0){
                result[j] = i + 1;
                break;
            }
            if(result[j] == 0){
                tall--;
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << result[i] << " ";
    }
    return 0;
}