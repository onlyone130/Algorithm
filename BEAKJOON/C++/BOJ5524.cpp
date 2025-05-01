#include <iostream>
#include <algorithm>
#include <string>

//입실 관리
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); 

    string buf, line;
    for (int i = 0; i < n; i++) {
        getline(cin, line);
        buf = line; 

        for_each(buf.begin(), buf.end(), [](char &c) { c = tolower(c); });

        cout << buf << '\n';
    }
}