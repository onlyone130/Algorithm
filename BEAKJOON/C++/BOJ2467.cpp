#include <iostream>
#include <vector>
#include <climits>

// 용액
using namespace std;

const int NMAX = 100001;
const int MAXSUM = 2000000001;

int sol[NMAX];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> sol[i];
    }

    int resultsum = MAXSUM;
    int resultleft = 0;
    int resultright = 0;

    int l = 0;
    int r = n - 1;

    while(l < r){
        int left = sol[l];
        int right = sol[r];
        int sum = left + right;

        if(abs(sum) < abs(resultsum)){
            resultsum = sum;
            resultleft = left;
            resultright = right;
        }

        if(sum == 0){
            break;
        } else if(sum < 0){
            ++l;
        } else {
            --r;
        }
    }

    cout << resultleft << " " << resultright << "\n";
}