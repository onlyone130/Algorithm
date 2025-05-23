#include <iostream>
#include <algorithm>
#include <vector>

//N과 M (12)
using namespace std;

int a[8];
int q[8];
vector <vector<int>> d;
 
void go(int index, int start, int n, int m) {
	if (index == m)
	{
		vector <int> temp;
		for (int i = 0; i < m; i++)
		{
			temp.push_back(q[a[i]]);
		}
		d.push_back(temp);
		return;
	}
 
	for (int i = start; i < n; i++)
	{
		a[index] = i;
		go(index + 1, i, n, m);
	}
}
 
int main() {
	int N, M;
	cin >> N >> M;
 
	for (int i = 0; i < N; i++)
	{
		cin >> q[i];
	}
 
	sort(q, q + N);
	go(0, 0, N, M);
 
	sort(d.begin(), d.end());
	d.erase(unique(d.begin(), d.end()), d.end());
 
	for (auto& v : d) {
		for (int i = 0; i < M; i++)
		{
			cout << v[i];
			if (i != M-1)
			{
				cout << ' ';
			}
		}
		cout << '\n';
	}
	return 0;
 
}