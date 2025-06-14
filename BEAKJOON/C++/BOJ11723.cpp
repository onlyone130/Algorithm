#include <iostream>
#include <string>

using namespace std;

//집합
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 0. 입력 받기
    int M;
    cin >> M; // 1 <= M <= 3백만

    // 1. 연산 수행
    int bitmask = 0;
    for (int i = 0; i < M; ++i) {
        string str;
        int x;
        cin >> str;
        if (str == "add") {
            cin >> x;
            bitmask = bitmask | (1 << (x - 1)); // OR : 비트를 왼쪽으로 x - 1번 이동시켜 x번째 위치에 1이 설정된 이진수 생성!
        } else if (str == "remove"){
            cin >> x;
            bitmask = bitmask & ~(1 << (x - 1)); // AND : x 번째 비트를 0으로 설정
        } else  if (str == "check"){
            cin >> x;
            bool tmp = bitmask & (1 << (x - 1)); // AND : x 번째 비트가 1인지 확인
            if (tmp) {
                cout << 1 << '\n';
            } else {
                cout << 0 << '\n';
            }
        } else if (str == "toggle") {
            cin >> x;
            bitmask = bitmask ^ (1 << (x - 1)); // XOR : x 번째 비트 반전시키기 
        } else if (str == "all") {
            bitmask = (1 << 20) - 1; // 1~20번째 비트 수까지 전부 1로 채우기 
        } else if (str == "empty") {
            bitmask = 0; // 초기화 
        }
    }

    return 0;
}