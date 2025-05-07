#include <iostream>
#include <vector>
#include <algorithm>

//나무 자르기
using namespace std;

vector<int> v;

long binary(int h){
    long result = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i] > h){
            result += v[i] - h;
        }
    }
    return result;
}

int main(){
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    int min = 0;
    int max = *max_element(v.begin(), v.end());

    while(min < max){
        int mid = (min + max) / 2;
        long sum = binary(mid);

        if(sum < m){
            max = mid;
        } else {
            min = mid + 1;
        }
    }
    cout << min - 1 << '\n';
}