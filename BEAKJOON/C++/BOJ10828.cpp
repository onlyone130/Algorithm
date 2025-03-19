#include <iostream>
#include <string>

//스택
using namespace std;

const int SIZE = 10000;
int s_stack[SIZE];
int s_size = 0;  

void push(int item) {
    if (s_size < SIZE) {
        s_stack[s_size] = item;
        s_size++;
    }
}

int pop() {
    if (s_size == 0) {
        return -1; 
    } else {
        s_size--;
        return s_stack[s_size];
    }
}

int s_empty() {
    return s_size == 0 ? 1 : 0;
}

int top() {
    if (s_size == 0) {
        return -1; 
    } else {
        return s_stack[s_size - 1];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; 
    cin >> n; 

    string s; 
    while (n--) {
        cin >> s; 

        if (s == "push") {
            int x;
            cin >> x; 
            push(x);
        } else if (s == "pop") {
            cout << pop() << '\n'; 
        } else if (s == "size") {
            cout << s_size << '\n'; 
        } else if (s == "empty") {
            cout << s_empty() << '\n';
        } else if (s == "top") {
            cout << top() << '\n'; 
        }
    }
    return 0;
}
