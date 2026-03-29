#include <iostream>
#include <algorithm>
#include <vector>

// 센서
using namespace std;

int n, k;
vector<int> v;
vector<int> v2;

int main(void)
{
  cin >> n;
  cin >> k;
  for (int i = 0; i < n; i++)
  {
    int n;
    cin >> n;
    v.push_back(n);
  }
  sort(v.begin(), v.end());
  for (int i = 0; i < n - 1; i++)
    v2.push_back(v[i + 1] - v[i]);

  sort(v2.begin(), v2.end());

  int res = 0;
  for (int i = 0; i < v2.size() - (k - 1) && !v2.empty(); i++)
    res += v2[i];
  cout << res;
}