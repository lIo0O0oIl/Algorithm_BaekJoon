// https://www.acmicpc.net/problem/9076

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int t;
	vector<int> v(5);
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> v[0] >> v[1] >> v[2] >> v[3] >> v[4];
		sort(v.begin(), v.end());
		if (v[3] - v[1] >= 4) cout << "KIN\n";
		else cout << v[1] + v[2] + v[3] << '\n';
	}
}


/*
5 9 9 10 10

9 10

*/