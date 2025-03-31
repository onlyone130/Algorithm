#include <iostream>
#include <vector>

//리모컨
using namespace std;

int main(){
    int n,m;
    vector<int> v;
    vector<bool> broke(10,false); //0~9 중에서 고장난 버튼 지정

    cin >> n;
    cin >> m;

    for(int i = 0; i < m; i++){
        int num;
        cin >> num;
        broke[num] = true;
    }
    //+ 랑 - 만 사용하는 경우
    int minnum = abs(100 - n);

    //숫자버튼을 이용한 모든 채널 탐색
    for(int  i = 0; i <= 999999; i++){
        int tmp = i, len = 0;
        bool isValid = true;

        if(tmp == 0){ //0 입력 시 예외
            if(broke[0]){
                continue;
            }
            len = 1;
        }
        while(tmp > 0){
            //고장난 버튼이 포함되는 경우
            if(broke[tmp % 10]){
                isValid = false;
                break;
            }
            tmp /= 10;
            len++;
        }
        if(isValid){
            int num = len+abs(n - i);
            minnum = min(minnum, num);
        }
    }
    cout << minnum << '\n';
}