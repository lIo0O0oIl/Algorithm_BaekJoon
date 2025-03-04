// https://www.acmicpc.net/problem/1755

#include <iostream>
#include <map>
using namespace std;

string ten[] = { "zero", "own", "two", "three", "four", "five",
"six", "seven", "eight", "nine" };

int main()
{
	int n, m;
	string temp;
	map<string, int> arr;
	cin >> n >> m;
	for (int i = n; i <= m; i++)
	{
		if (i / 10 > 0)		// 10 이상의 수일 때
		{
			temp = ten[i / 10] + ' ' + ten[i % 10];
		}
		else
		{
			temp = ten[i % 10];
		}
		arr[temp] = i;
	}

	int count = 0;
	for (auto i : arr)
	{
		cout << i.second << ' ';
		count++;
		if (count >= 10)
		{
			cout << '\n';
			count = 0;
		}
	}
}