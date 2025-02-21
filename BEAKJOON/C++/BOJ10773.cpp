#include <iostream>
#include <stack>

//제로
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); 
    cout.tie(0);

    int k,n;
    cin >> k;
    stack<int> st;

    for(int i=0;i<k;i++){
        cin >> n;
        if(n == 0){
            if(!st.empty()){
                st.pop();
            }
        } else {
            st.push(n);
        }
    }
    int sum = 0;
    while(!st.empty()){        
        sum += st.top();
        st.pop();
    }
    cout << sum << '\n';

    return 0;
}