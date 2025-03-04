#include <iostream>
#include <vector>

//음계
using namespace std;

int main(){
    vector<int> vec;
    vector<int> vecasc = {1,2,3,4,5,6,7,8};
    vector<int> vecdes = {8,7,6,5,4,3,2,1};
    
    for(int i=0;i<8;i++){
        int num;
        cin >> num;
        vec.push_back(num);
    }
    if(vec == vecasc){
        cout << "ascending" << '\n';
    } else if(vec == vecdes){
        cout << "descending" << '\n';
    } else {
        cout << "mixed" << '\n';
    }
    return 0;
}