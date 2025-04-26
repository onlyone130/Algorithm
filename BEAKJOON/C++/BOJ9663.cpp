#include <iostream>
#include <cmath>

//N-Queen
using namespace std;

const int NMAX = 16;

int n;
int ary[NMAX];
int d = 0;

bool possible(int col){
    for(int i = 0; i < col; i++){
        if(ary[i] == ary[col]){
            return false;
        } else if(abs(col - i) == abs(ary[col] - ary[i])){
            return false;
        }
    }
    return true;
}

void dfs(int depth){
    if(depth == n){
        d++;
        return;
    }
    for(int i = 0; i < n; i++){
        ary[depth] = i;
        if(possible(depth)){
            dfs(depth + 1);
        }
    }
}

int main(){
    cin >> n;
    dfs(0);
    cout << d << '\n';
}