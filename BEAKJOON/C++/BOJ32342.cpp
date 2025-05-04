#include <iostream>
#include <cstring>

//와우와 쿼리
using namespace std;

const int NMAX = 101;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int q;
    cin >> q;
    cin.ignore();
    
    char buf[NMAX];

    while(q--){
        string line;
        getline(cin, line);

        int cnt = 0;

        for(int i = 0; i + 3 <= (int)line.size(); i++){
            if(line.substr(i, 3) == "WOW"){
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
    /*for(int i = 0; i < q; i++){
        cin.getline(buf,NMAX);

        int len = strlen(buf);

        for(int j = 0; j <= len - 3; j++){
            if(buf[j] == 'W' && buf[j + 1] == 'O' && buf[j + 2] == 'W'){
                cnt++;
            }
        }

        cout << cnt << '\n';
    }
    */

    return 0;
}