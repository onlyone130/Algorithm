#include <iostream>
#include <algorithm>

//N과 M (5)
using namespace std;

const int NMAX = 9;

int ary[NMAX];
bool visited[NMAX];
int output[NMAX];

int n, m;

void dfs(int depth){
    if(depth == m){
        for(int i = 0; i < m; i++){
            cout << output[i] << " ";
        }
        cout << '\n';
        return;
    }

    for(int i = 0; i < n; i++){
        if(!visited[i]){
            visited[i] = true;
            output[depth] = ary[i];
            dfs(depth + 1);
            visited[i] = false;
        }
    }
}

int main(){
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> ary[i];
    }

    sort(ary, ary + n);

    dfs(0);

    return 0;
}