#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <tuple>

//소수 경로
using namespace std;

const int NMAX = 10001;

bool check[NMAX];
bool visited[NMAX];
string s1, s2;


void init(){
    for(int i = 2; i < 10000; i++){
        if(check[i] == false){
            for(int j = i * 2; j < 10000; j += i){
                check[j] = true;
            }
        }
    }
}

void dfs(){
    queue<pair<string, int>> qu;
    visited[stoi(s1)] = true;
    qu.push({s1, 0});
    while(!qu.empty()){
        string s;
        int cnt;
        tie(s, cnt) = qu.front();
        qu.pop();
        if(s == s2){
            cout << cnt << '\n';
            return;
        }
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 10; j++){
                string ss = s;
                ss[i] = j + '0';
                if(check[stoi(ss)] == true){
                    continue;
                }
                if(visited[stoi(ss)] == true){
                    continue;
                }
                if(stoi(ss) < 1000){
                    continue;
                }
                visited[stoi(ss)] = true;
                qu.push({ss, cnt + 1});
            }
        }
    }
    cout << "Impossible" << '\n';
}

int main(){
    int n;
    cin >> n;
    init();

    while(n--){
        cin >> s1 >> s2;
        dfs();
        memset(visited, false, sizeof(visited));
    }
}