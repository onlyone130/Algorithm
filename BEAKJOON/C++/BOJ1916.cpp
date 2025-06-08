#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>

//최소비용 구하기
using namespace std;

const int NMAX = 1001;

vector<pair<int, int>> Graph[NMAX];
int Dist[NMAX];

void Dijkstra(int StartCity)
{
	fill(Dist, Dist + NMAX, 2147483647);

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	pq.push({ 0, StartCity });
	Dist[StartCity] = 0;
	
	while (!pq.empty())
	{
		int CurNode = pq.top().second;
		int CurCost = pq.top().first;
		pq.pop();

		if (Dist[CurNode] < CurCost)
			continue;

		int Size = static_cast<int>(Graph[CurNode].size());
		for (int i = 0; i < Size; ++i)
		{
			int NextNode = Graph[CurNode][i].first;
			int NextCost = Graph[CurNode][i].second + CurCost;

			if (Dist[NextNode] > NextCost)
			{
				pq.push({ NextCost, NextNode });
				Dist[NextNode] = NextCost;
			}
		}
	}
}

int main(){

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m; ++i){
		int CityA, CityB, Cost;
		cin >> CityA >> CityB >> Cost;
		Graph[CityA].push_back({CityB, Cost});
	}

	int StartCity, EndCity;
	cin >> StartCity >> EndCity;

	Dijkstra(StartCity);

	cout << Dist[EndCity];

	return 0;
}