// https://www.acmicpc.net/problem/31822

#include <iostream>
using namespace std;

int main()
{
	string s, temp;
	int t, cnt = 0;
	bool is_ok = true;
	cin >> s >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> temp;
		for (int j = 0; j < 5; j++)
		{
			if (s[j] != temp[j])
			{
				is_ok = false;
				break;
			}
		}
		if (is_ok) cnt++;
		is_ok = true;
	}
	cout << cnt;
}