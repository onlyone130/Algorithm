#include <iostream>
#include <string.h>

//잃어버린 괄호
using namespace std;

int len, tmp=0;
int sum = 0;
bool flag = false;
char str[51];

int main(void) {
	cin >> str;
	len = strlen(str);
	for (int i = 0; i <= len; i++) {
		if (str[i] == '+' || str[i] == '-' || str[i] == '\0') {
			if (flag == true) {
				sum -= tmp;
				tmp = 0;
			}
			else {
				sum += tmp;
				tmp = 0;
				if (str[i] == '-') {
					flag = true;
				}       
			}
		}
		else {
			tmp *= 10; 
			tmp += str[i]-'0';
		}
	}
	cout << sum << endl;

	return 0;
}