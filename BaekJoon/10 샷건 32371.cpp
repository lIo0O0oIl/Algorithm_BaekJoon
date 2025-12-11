// https://www.acmicpc.net/problem/32371

#include <iostream>
#include <set>
using namespace std;

int main()
{
	char input[41];
	char put;
	set<char> set;
	int now = 0;
	for (int i = 0; i < 40; i++)
	{
		cin >> input[i];
	}
	for (int i = 0; i < 9; i++)
	{
		cin >> put;
		set.insert(put);
	}
	for (int i = 0; i < 40; i++)
	{
		if (set.find(input[i]) != set.end()) now++;
		if (now == 5)
		{
			now = i;
			break;
		}
	}
	cout << input[now];
}