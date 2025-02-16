#include <iostream>
#include <map>

//대칭 차집합
using namespace std;

map<int, bool> maps;
int n,m,num;

int main(){
    cin >> n >> m;
    for(int i=0;i<n+m;i++){
        cin >> num;
        if(maps[num] == true){
            maps.erase(num);
        } else {
            maps[num] = true;
        }
    }
    cout << maps.size() << '\n';
}