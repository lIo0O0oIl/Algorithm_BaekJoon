// https://www.acmicpc.net/problem/4673

#include <iostream>
#include <string>
using namespace std;

int arr[10100];

int main()
{
	int now = 1, number = 0;
	string s = "1";


	while (true)
	{
		s = to_string(now);
		number = now;

		for (int i = 0; i < s.size(); i++)
		{
			number += s[i] - '0';
		}

		if (number > 10100) break;
		arr[number] = 1;

		now++;
	}

	for (int i = 1; i <= 10000; i++)
	{
		if (arr[i] == 0) cout << i << '\n';
	}
}