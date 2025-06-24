#include <iostream>

//사이클 게임
using namespace std;

const int NMAX = 500001;

int parent[NMAX];

int find(int x){
    if(x == parent[x]){
        return x;
    }
    return parent[x] = find(parent[x]);
}

void myunion(int x, int y){
    x = find(x);
    y = find(y);
    
    if(x < y){
        parent[y] = x;
    } else {
        parent[x] = y;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        parent[i] = i;
    }

    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;

        if(find(x) == find(y)){
            cout << i + 1 << '\n';
            return 0;
        } else {
            myunion(x, y);
        }
    }
    cout << 0 << '\n';
}