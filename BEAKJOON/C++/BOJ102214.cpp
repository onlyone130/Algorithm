#include <iostream>

using namespace std;

//Baseball
int main(){
    int t;
    cin >> t;
    int y, k;

    int caseNum = 0;
    while(caseNum < t){
        y = 0;
        k = 0;
        int inning = 0;
        int y2, k2;

        while(inning < 9){
            cin >> y2 >> k2;
            y += y2;
            k += k2;
            inning++;
        }

        if(y > k){
            cout << "Yonsei" << '\n';
        } else if(y < k){
            cout << "Korea" << '\n';
        } else {
            cout << "Draw" << '\n';
        }

        caseNum++;
    }
    return 0;
}