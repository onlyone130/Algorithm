    #include <iostream>
    #include <string>
    #include <queue>
    #include <sstream>

    int main(){

        std::ios::sync_with_stdio(false);
        std::cin.tie(nullptr);

        int n;
        std::cin >> n;
        std::cin.ignore();
        std::queue<int> queue;
        int l = 0;
        std::string cmd;
        std::ostringstream out;

        for (int i = 0; i < n; i++)
        {
            std::getline(std::cin, cmd);
            std::istringstream iss(cmd);
            std::string cmdd;
            iss >> cmdd;
            
            if (cmdd == "push"){
            int val;
            iss >> val;
            queue.push(val);
            l = val;
            } else if(cmdd == "pop"){
                if(queue.empty()){
                    out << -1 << '\n';
                } else{
                    out << queue.front() << '\n';
                    queue.pop();
                }
            } else if (cmdd == "size"){
                out << queue.size() << '\n';
            } else if (cmdd == "empty") {
                out << (queue.empty() ? 1 : 0) << "\n";
            }else if (cmdd == "front") {
        if (queue.empty()) {
            out << -1 << "\n";
        } else {
            out << queue.front() << "\n";
        }
    }
    else if (cmdd == "back") {
        if (queue.empty()) {
            out << -1 << "\n";
        } else {
            out << l << "\n";
        }
    }
            
        }
        std::cout << out.str();
        return 0;
    }