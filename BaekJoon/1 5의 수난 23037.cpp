// https://www.acmicpc.net/problem/23037

#include <iostream>
using namespace std;

int main()
{
	string n;
	int num, now, answer = 0;
	cin >> n;
	for (int i = 0; i < n.size(); i++)
	{
		now = n[i] - '0';
		num = now;
		for (int j = 0; j < 4; j++)
		{
			num *= now;
		}
		answer += num;
	}
	cout << answer;
}