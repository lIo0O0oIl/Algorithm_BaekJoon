// https://www.acmicpc.net/problem/2720

#include <iostream>
using namespace std;

int main() {
	int count[4] = { 0, 0, 0, 0 };
	int coin[4] = { 25, 10, 5, 1 };
	int t, c;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> c;
		for (int j = 0; j < 4; j++)
		{
			count[j] = c / coin[j];
			c = c % coin[j];
		}
		for (int j = 0; j < 4; j++)
		{
			cout << count[j] << " ";
			count[j] = 0;
		}
		cout << endl;
	}
}