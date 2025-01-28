#include <iostream>
#include <string>

const int SIZE = 10000; 
int stack[SIZE];
int size = 0; 

void push(int item) {
    if (size < SIZE) {
        stack[size] = item;
        size++;
    }
}

int pop() {
    if (size == 0) {
        return -1; 
    } else {
        size--;
        return stack[size];
    }
}

int s_empty() {
    return size == 0 ? 1 : 0;
}

int top() {
    if (size == 0) {
        return -1; 
    } else {
        return stack[size - 1];
    }
}

int main() {
    int n; 
    std::cin >> n; 

    std::string command; 
    while (n--) {
        std::cin >> command; 

        if (command == "push") {
            int x;
            std::cin >> x; 
            push(x);
        } else if (command == "pop") {
            std::cout << pop() << '\n'; 
        } else if (command == "size") {
            std::cout << size << '\n'; 
        } else if (command == "empty") {
            std::cout << s_empty() << '\n';
        } else if (command == "top") {
            std::cout << top() << '\n'; 
        }
    }

    return 0;
}
