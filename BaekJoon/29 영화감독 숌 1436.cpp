// https://www.acmicpc.net/problem/1436

#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, index = 1, sixCnt = 1;
	long long now = 1665;
	string nowString;
	cin >> n;

	if (n == 1)
	{
		cout << 666;
		return 0;
	}

	while (true)
	{
		now++;
		nowString = to_string(now);
		for (int i = 0; i < nowString.size(); i++)
		{
			if (nowString[i] == '6')
			{
				sixCnt++;
				if (sixCnt >= 3)
				{
					break;
				}
			}
			else
			{
				sixCnt = 0;
			}
		}
		if (sixCnt >= 3)
		{
			index++;
			if (index == n)
			{
				break;
			}
		}
		sixCnt = 0;
	}
	cout << now;
}