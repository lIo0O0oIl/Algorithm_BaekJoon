// https://www.acmicpc.net/problem/11945

#include <iostream>
using namespace std;

int main() {
	string input;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		for (int j = m - 1; j >= 0; --j)
		{
			cout << input[j];
		}
		cout << endl;
	}
}