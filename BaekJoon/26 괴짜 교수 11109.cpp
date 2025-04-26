// https://www.acmicpc.net/problem/11109

#include <iostream>
using namespace std;

int main()
{
	int t;
	long long d, n, s, p;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> d >> n >> s >> p;
		long long j = n * s;
		long long b = d + n * p;
		if (j == b) cout << "does not matter\n";
		else if (j > b) cout << "parallelize\n";
		else cout << "do not parallelize\n";
	}
}