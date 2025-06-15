#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

//문자열 폭발
using namespace std;

vector<char> v;
string s, b;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> s >> b;
    
    int s_size = (int)s.size();
    int b_size = (int)b.size();

    for(int i = 0; i < s_size; i++){
        v.push_back(s[i]);

        if((int)v.size() >= b_size){
            bool flag = true;
            for(int j = 0; j < b_size; j++){
                if(v[v.size() - b_size + j] != b[j]){
                    flag = false;
                    break;
                }
            }
            if(flag){
                for(int k = 0; k < b_size; k++){
                    v.pop_back();
                }
            }
        }
    }
    if(v.empty()){
        cout << "FRULA";
    } else {
        for(int i = 0; i < (int)v.size(); i++){
            cout << v[i];
        }
    }
}