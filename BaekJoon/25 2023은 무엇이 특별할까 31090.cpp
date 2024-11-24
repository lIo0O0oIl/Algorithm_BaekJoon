// https://www.acmicpc.net/problem/31090

#include <iostream>
using namespace std;

int main()
{
	int t, n;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		int temp = (n % 1000) % 100;
		if ((n + 1) % temp == 0)
		{
			cout << "Good\n";
		}
		else cout << "Bye\n";
	}
}