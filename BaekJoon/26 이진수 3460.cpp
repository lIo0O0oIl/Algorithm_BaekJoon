// https://www.acmicpc.net/problem/3460

#include <iostream>
using namespace std;

int main()
{
	int t, input;
	string answer = "";
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> input;
		while (input != 0)
		{
			if (input % 2 == 1) answer += "1";
			else answer += "0";
			input /= 2;
		}
		for (int j = 0; j < answer.size(); j++)
		{
			if (answer[j] == '1') cout << j << ' ';
		}
		cout << '\n';
		answer = "";
	}
}