#include <iostream>
#include <sstream>

//하노이 탑 이동 순서
using namespace std;

int n;
int cnt = 0;
stringstream s;

void solve(int n, int start, int end, int tmp){
    if(n==1){
        cnt++;
        s << start << " " << end << '\n';

    } else{
        solve(n-1,start,tmp,end);
        s << start << " " << end << "\n";
        cnt++;
        solve(n-1,tmp,end,start);
    }
}

int main(){
    cin >> n;
    solve(n,1,3,2);
    cout << cnt << '\n';
    cout << s.str();
}