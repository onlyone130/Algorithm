#include <iostream>
#include <string>

//탑
using namespace std;

int main(){
    int n;
    cin >> n;

    stack<pair<int,int>> stk;

    for(int i = 0; i < n; i++){
        int height;
        cin >> height;

        while(!stk.empty()){
            if(height < stk.top().first){
                cout << stk.top().second << " ";
                stk.push(make_pair(height, i+1));
                break;
            }
            stk.pop();
        }
        if(stk.empty()){
            cout << "0" << " ";
            stk.push(make_pair(height, i+1));
        }
    }
    cout << '\n';
    return 0;
}