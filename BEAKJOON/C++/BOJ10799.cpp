#include <iostream>
#include <string>
#include <stack>

//쇠막대기
using namespace std;

void solve(const string& s){
    stack<char> st;
    int result = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            st.push('(');
        } else {
            st.pop();
            if(s[i - 1] == '('){
                // 레이저
                result += st.size();
            } else {
                // 쇠막대기 끝
                result += 1;
            }
        }
    }
    cout << result << '\n';
}

int main(){
    string a;
    cin >> a;
    solve(a);
    return 0;
}