#include <iostream>
#include <algorithm>

//일곱 난쟁이
using namespace std;

int main(){
    int tall[10];
    int sum = 0;
    for(int i=0;i<9;i++){
        cin >> tall[i];
        sum += tall[i];
    }
    sort(tall,tall+9);
    for(int i=0;i<8;i++){
        for(int j=i+1;j<9;j++){
            if(sum-(tall[i]+tall[j])==100){
                for(int w=0;w<9;w++){
                    if(w !=i && w!=j){
                        cout << tall[w] << '\n';
                    }
                }
                return 0;
            }
        }
    }
    return 0;
}