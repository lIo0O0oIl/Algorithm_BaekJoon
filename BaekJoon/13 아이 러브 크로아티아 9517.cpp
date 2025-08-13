// https://www.acmicpc.net/problem/9517

#include <iostream>
using namespace std;

int main()
{
	int k, n, t, time = 210, answer;
	char z;
	bool end = false;
	cin >> k >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> t >> z;
		time -= t;
		if (time <= 0 && end == false)
		{
			answer = k;
			end = true;
		}
		if (z == 'T')
		{
			k++;
			if (k == 9) k = 1;
		}
	}
	cout << answer;
}