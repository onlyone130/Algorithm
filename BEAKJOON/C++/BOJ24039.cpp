#include <iostream>
#include <cmath>

using namespace std;

bool prime_num(int num){
    if(num==2){
        return true;
    }
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int last = 0;
    int sum;
    int i = 2;
    while (true){
        if (prime_num(i)){
            sum = last*i;
            if(sum>n){
                break;
            }
            last = i;
        }
        i++;
    }
    cout << sum << endl;
    return 0;
}