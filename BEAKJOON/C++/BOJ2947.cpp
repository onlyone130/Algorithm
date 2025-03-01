#include <iostream>

//나무 조각
using namespace std;

int main(){
    int ary[5];
 
	for (int i = 0; i < 5; i++) {
		cin >> ary[i];
	}
 
	bool sorted = false;
    while (!sorted) {
        sorted = true;

        for (int i = 0; i < 4; i++) {  //마지막 원소가 가장 크다고 가정
            if (ary[i] > ary[i + 1]) {  //원소 두 개 비교
                swap(ary[i], ary[i + 1]);  //swap
                sorted = false;

                //swap하면 실행
                for (int j = 0; j < 5; j++) {
                    cout << ary[j] << " ";
                }
                cout << "\n";
            }
        }
    }
	return 0;
}