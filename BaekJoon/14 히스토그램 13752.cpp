// https://www.acmicpc.net/problem/13752

#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			cout << "=";
		}
		cout << endl;
	}
}