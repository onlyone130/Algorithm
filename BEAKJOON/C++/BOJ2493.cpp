#include <iostream>
#include <algorithm>
#include <stack>

//탑
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;

    stack<pair<int,int>> s;

    for(int i = 0; i < n; i++){
        int height;
        cin >> height;

        while(!s.empty()){
            if(height < s.top().first){
                cout << s.top().second << " ";
                s.push(make_pair(height, i+1));
                break;
            }
            s.pop();
        }
        if(s.empty()){
            cout << "0" << " ";
            s.push(make_pair(height, i+1));
        }
    }
    cout << '\n';
    return 0;
}