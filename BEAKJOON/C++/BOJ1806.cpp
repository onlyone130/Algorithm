#include <iostream>

//부분합
using namespace std;

const int NMAX = 100020;

int arr[NMAX];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,s;
    cin >> n >> s;

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    int count = 0, sum = 0, right = 0, min = 0;

	for (int left=0; left<n; left++) {
		while (sum < s && right < n) { 
			sum += arr[right];
			right++;
		}
		if (sum >= s) { 
			if (left == 0)
				min = right - left;
			else {
				if (right - left < min)
					min = right - left;
			}
		}
		sum -= arr[left];
	}
	
	cout << min <<'\n';

    return 0;
}