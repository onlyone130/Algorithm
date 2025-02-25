#include <iostream>
#include <algorithm>

//최소, 최대
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int ary[n];
    for(int i=0;i<n;i++){
        cin >> ary[i];
    }
    int length = sizeof(ary) / sizeof(int);

    int min = *min_element(ary, ary + length);
    int max = *max_element(ary, ary + length);

    cout << min << ' ' << max << '\n';
    return 0;
}