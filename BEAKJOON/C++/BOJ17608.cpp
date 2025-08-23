#include <iostream>
#include <stack>

//막대기
using namespace std;

int main(){
    int n;
    cin >> n;

    stack<int> st;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        st.push(a);
    }

    int tmp = st.top();
    int cnt = 1;

    while(!st.empty()){
        if(st.top() > tmp){
            tmp = st.top();
            cnt++;
        }
        st.pop();
    }
    cout << cnt << '\n';

    return 0;
}