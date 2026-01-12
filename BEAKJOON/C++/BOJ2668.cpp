#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

// 숫자고르기
using namespace std;

vector<int> v;
int n;
int arr[101];
bool visited[101];

void DFS(int start, int cur){
    if(visited[cur]){
        if(start == cur){
            v.push_back(arr[start]);
        }
        return;
    }
    visited[cur] = true;
    DFS(start, arr[cur]);
}

int main(void){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    for(int i = 1; i <= n; i++){
        memset(visited, false, sizeof(visited));
        DFS(i, i);
    }

    sort(v.begin(), v.end());
    cout << v.size() << '\n';
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << '\n';
    }
}