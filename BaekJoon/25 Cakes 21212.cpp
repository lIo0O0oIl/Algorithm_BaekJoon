// https://www.acmicpc.net/problem/21212

#include <iostream>
using namespace std;

int main()
{
	int n, a, b, answer = 10000;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		if (b >= a)
		{
			if (b / a < answer) answer = b / a;
		}
		else
		{
			cout << 0;
			return 0;
		}
	}
	cout << answer;
}