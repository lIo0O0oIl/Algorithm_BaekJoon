// https://www.acmicpc.net/problem/14182

#include <iostream>
using namespace std;

int main()
{
	int n;
	while (true)
	{
		cin >> n;
		if (n == 0) break;
		if (n > 1000000 && n <= 5000000) cout << (int)(n * 0.9f) << '\n';
		else if (n > 5000000) cout << (int)(n * 0.8f) << '\n';
		else cout << n << '\n';
	}
}