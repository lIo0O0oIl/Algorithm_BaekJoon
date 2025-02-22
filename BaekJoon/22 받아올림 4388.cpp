// https://www.acmicpc.net/problem/4388

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a = "0000000000", b = "0000000000";
	string temp;
	int ceil = 0, answer = 0;
	while (true)
	{
		int nowindex = 9;
		cin >> temp;
		for (int i = temp.size() - 1; i >= 0; --i)
		{
			a[nowindex] = temp[i];
			nowindex--;
		}

		nowindex = 9;
		cin >> temp;
		for (int i = temp.size() - 1; i >= 0; --i)
		{
			b[nowindex] = temp[i];
			nowindex--;
		}

		if (a == "0000000000" && b == "0000000000") break;

		for (int i = 9; i >= 0; --i)
		{
			if ((a[i] - '0') + (b[i] - '0') + ceil >= 10)
			{
				ceil = 1;
				answer++;
			}
		}
		cout << answer << '\n';

		answer = 0;
		ceil = 0;
		a = "0000000000";
		b = "0000000000";
	}
}