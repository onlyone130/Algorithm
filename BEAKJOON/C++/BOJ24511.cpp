#include <iostream>
#include <queue>
#include <stack>

//queuestack
std::stack <int> stack;
std::queue <int> queue;
bool flag[100000];

int main(){
    std::cout.tie(NULL);
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++){
        std::cin >> flag[i];
    }
    int in;
    for (int i = 0; i < n; i++){
        std::cin >> in;
        if (flag[i]==0){
            stack.push(in);
        }
    }
    while (!stack.empty()){
        queue.push(stack.top());
        stack.pop();
    }
    int m;
    std::cin >> m;
    for (int i = 0; i < m; i++){
        std::cin >> in;
        queue.push(in);
    }
    for (int i = 0; i < m; i++){
        std::cout << queue.front() << " ";
        queue.pop();
    }
}