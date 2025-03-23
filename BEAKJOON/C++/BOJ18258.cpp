    #include <iostream>
    #include <string>
    #include <queue>
    #include <sstream>

    //큐 2
    using namespace std;

    int main(){

        ios::sync_with_stdio(false);
        cin.tie(NULL);

        int n;
        cin >> n;
        cin.ignore();
        queue<int> queue;
        int l = 0;
        string cmd;
        ostringstream out;

        for (int i = 0; i < n; i++)
        {
            getline(std::cin, cmd);
            istringstream iss(cmd);
            string cmdd;
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
        cout << out.str();
        return 0;
    }