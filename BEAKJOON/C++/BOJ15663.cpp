#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

//N과 M (9)
using namespace std;

const int NMAX = 9;

int n, m;
int first[NMAX];
int ary[NMAX];
bool visited[NMAX];
set<vector<int>> s;

void dfs(int k){
    if(k == m){
        vector<int> v;
        for(auto i = 0; i < m; i++){
            v.push_back(ary[i]);
        }
        s.insert(v);
        v.clear();
    } else {
        for(auto i = 0; i < n; i++){
            if(!visited[i]){
                visited[i] = true;
                ary[k] = first[i];
                dfs(k + 1);
                visited[i] = false;
            }
        }
    }
}

int main(){
    cin >> n >> m;
    
    for(int i = 0; i < n; i++){
        cin >> first[i];
    }

    sort(first, first + n);

    dfs(0);

    for(auto vector : s){
        for(auto tmp : vector){
            cout << tmp << " ";
        }
        cout << '\n';
    }
}