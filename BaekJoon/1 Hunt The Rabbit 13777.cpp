// https://www.acmicpc.net/problem/13777

#include <iostream>
using namespace std;

int main()
{
	int inputNum;
	while (true)
	{
		cin >> inputNum;
		if (inputNum == 0) break;

		int left = 1, right = 50;
		while (true)
		{
			int mid = (left + right) / 2;
			cout << mid << ' ';
			if (mid == inputNum) break;
			else if (inputNum > mid)
			{
				left = mid + 1;
			}
			else
			{
				right = mid - 1;
			}
		}
		cout << '\n';
	}
}