#include <iostream>
#include <vector>

//경로 찾기
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> ary(n, vector<int>(n));


    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> ary[i][j];
        }
    }

    for(int k = 0; k < n; k++){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(ary[i][k] && ary[k][j]){
                    ary[i][j] = 1;
                }
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << ary[i][j] << " ";
        }
        cout << '\n';
    }
}