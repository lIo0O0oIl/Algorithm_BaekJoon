// https://www.acmicpc.net/problem/5292

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)cout << "DeadMan\n";
		else if (i % 3 == 0) cout << "Dead\n";
		else if (i % 5 == 0) cout << "Man\n";
		else cout << i << ' ';
	}
}