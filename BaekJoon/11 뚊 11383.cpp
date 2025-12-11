// https://www.acmicpc.net/problem/11383

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m, now = 0;
	cin >> n >> m;
	string input;
	char c;
	bool is_Ok = true;
	vector<string> vec(n);

	for (int i = 0; i < n; i++)
	{
		cin >> vec[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m * 2; j++)
		{
			cin >> c;
			if (c != vec[i][now])
			{
				is_Ok = false;
			}
			if (j % 2 == 1) now++;
		}
		now = 0;
	}

	cout << (is_Ok ? "Eyfa" : "Not Eyfa");
}