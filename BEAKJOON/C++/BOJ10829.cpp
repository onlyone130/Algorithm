#include <iostream>
#include <stack>

//이진수 변환
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin >> n;

    stack<int> st;

    while(n != 0){
        if(n % 2 == 1){
            st.push(1);
        } else {
            st.push(0);
        }
        n /= 2;
    }

    while(!st.empty()){
        cout << st.top();
        st.pop();
    }
    
    return 0;
}