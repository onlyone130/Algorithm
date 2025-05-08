#include <iostream>
#include <vector>

//거짓말
using namespace std;

const int NMAX = 53;

int parent[NMAX];

int find(int x){
    if(parent[x] == x){
        return x;
    }
    return x = find(parent[x]);
}

void Union(int x, int y){
    x = find(x);
    y = find(y);
    parent[x] = y;
}

int main(){
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> know;
    vector<vector<int>> v(50);

    while(k--){
        int t;
        cin >> t;
        know.push_back(t);
    }

    for(int i = 1; i <= n; i++){
        parent[i] = i;
    }

    for(int i = 0; i < m; i++){
        int p;
        cin >> p;
        int num;
        int pre;
        
        for(int j = 0; j < p; j++){
            if(j >= 1){
                pre = num;
                cin  >> num;
                Union(pre, num);
            } else {
                cin >> num;
            }
            v[i].push_back(num);
        }
    }
    for(auto& list : v){
        bool flag = false;
        for(auto& person : list){
            if(flag){
                break;
            }
            for(auto& t : know){
                if(find(person) == find(t)){
                    flag = true;
                    break;
                }
            }
        }
        if(flag){
            m--;
        }
    }
    cout << m << '\n';

    return 0;
}