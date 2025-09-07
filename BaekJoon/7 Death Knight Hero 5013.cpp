// https://www.acmicpc.net/problem/5013

#include <iostream>
using namespace std;

int main()
{
	int n, win = 0;
	string skill;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> skill;
		if (skill.find("CD") == string::npos)
		{
			win++;
		}
	}
	cout << win;
}