#include <iostream>
#include <vector>

//시험 점수
using namespace std;

int main(){
    vector<int> v1, s1;

    for(int i = 0; i < 4; i++){
        int a;
        cin >> a;
        v1.push_back(a);
        if (i == 0)
            s1.push_back(a);
        else
            s1.push_back(s1[i-1] + a);
    }
    
    vector<int> v2, s2;

    for(int i = 0; i < 4; i++){
        int b;
        cin >> b;
        v2.push_back(b);
        if (i == 0)
            s2.push_back(b);
        else
            s2.push_back(s2[i-1] + b);
    }

    int sum1 = s1.back();
    int sum2 = s2.back();

    if(sum1 > sum2){
        cout << sum1 << '\n';
    } else {
        cout << sum2 << '\n';
    }

    return 0;
}