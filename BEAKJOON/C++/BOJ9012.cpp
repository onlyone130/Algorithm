#include <iostream>
#include <string>
#include <stack>

std::string check(std::string input) {
	std::stack<char> stack_t;
	for (int i = 0; i < input.size(); i++) {
		if (input[i] == '(') {
			stack_t.push('(');
		}
		else {
			if (stack_t.empty()) return "NO";
			stack_t.pop();
		}
	}
	if (stack_t.empty()) {
		return "YES";
	}
	else {
		return "NO";
	}
}

int main(void){
    std::ios::sync_with_stdio(0);
	std::cin.tie(0);
    
    std::string st;

    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> st;
        std::cout << check(st) << '\n';
    }   
}