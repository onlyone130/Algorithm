#include <iostream>
#include <stack>

//오큰수
using namespace std;

const int NMAX = 1000001;

int n;
int arr[NMAX];
int seq[NMAX];
stack<int> s;

int main(){
    cin >> n;
    
    for(int i=0;i<n;i++){
        cin >> seq[i];
    }

    for(int i=n-1;i>=0;i--){
        while(!s.empty()&&s.top()<=seq[i]){
            s.pop();
        }
        if(s.empty()){
            arr[i] = -1;
        } else {
            arr[i] = s.top();
        }
        s.push(seq[i]);
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << ' ';
    }
}