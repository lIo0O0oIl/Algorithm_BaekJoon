// https://www.acmicpc.net/problem/3449

#include <iostream>
using namespace std;

int main()
{
	int t, cnt = 0;
	string a, b;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;
		for (int j = 0; j < a.size(); j++)
		{
			if (a[j] != b[j])
			{
				cnt++;
			}
		}
		cout << "Hamming distance is " << cnt << ".\n";
		cnt = 0;
	}
}