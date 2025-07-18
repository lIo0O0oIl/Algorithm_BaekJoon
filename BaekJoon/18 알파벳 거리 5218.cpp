// https://www.acmicpc.net/problem/5218

#include <iostream>
using namespace std;

int main()
{
	int t;
	string a, b;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;
		cout << "Distances: ";
		for (int j = 0; j < a.size(); j++)
		{
			if (b[j] >= a[j]) cout << b[j] - a[j] << ' ';
			else cout << (26 + b[j]) - a[j] << ' ';
		}
		cout << '\n';
	}
}