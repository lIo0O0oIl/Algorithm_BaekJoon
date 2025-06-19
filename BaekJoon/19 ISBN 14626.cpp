// https://www.acmicpc.net/problem/14626

#include <iostream>
using namespace std;

int main()
{
	string n;
	int sum = 0;
	bool is_3 = true;
	int startIndex = 0;
	cin >> n;

	for (int i = 0; i < n.size() - 1; i++)
	{
		is_3 = !is_3;
		if (n[i] == '*')
		{
			startIndex = i + 1;
			continue;
		}
		int num = n[i] - '0';
		if (is_3) num = num * 3;
		sum += num;
	}
	sum += n[n.size() - 1] - '0';

	for (int i = 0; i < 10; i++)
	{
		int temp = i;
		if (startIndex % 2 == 0) temp = i * 3;
		if ((sum + temp) % 10 == 0)
		{
			cout << i;
		}
	}
}




/*
2 6
3 9
4 12
5 15
*/