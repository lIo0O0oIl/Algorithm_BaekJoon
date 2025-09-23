// https://www.acmicpc.net/problem/6889

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<string> vecN(n), vecM(m);
	for (int i = 0; i < n; i++) cin >> vecN[i];
	for (int i = 0; i < m; i++) cin >> vecM[i];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << vecN[i] << " as " << vecM[j] << '\n';
		}
	}
}