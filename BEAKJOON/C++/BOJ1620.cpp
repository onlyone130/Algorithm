#include <iostream>
#include <string>
#include <cctype>
#include <map>
#include <algorithm>

//나는야 포켓몬 마스터 이다솜   
using namespace std;

string pokemon[100000];

int main() {
	map<string, int> poke;  
	int n;               
	int m;               
	string name;   
	int num;       

    cin.tie(0);
	ios::sync_with_stdio(0);
    
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> pokemon[i];
		poke.insert(pair(pokemon[i], i));
	}

	for (int i = 0; i < m; i++) {
		cin >> name;

		if (isdigit(name[0]) != 0) {
			num = stoi(name) - 1;
			cout << pokemon[num] << "\n";
		}

		else {
			auto index = poke.find(name);
			cout << index->second + 1 << "\n";
		}
	}

	return 0;
}