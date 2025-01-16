// https://www.acmicpc.net/problem/8595

#include <iostream>
#include <string>
using namespace std;

int main()
{
	long long n, answer = 0;
	char input;
	string number = "";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (input >= 48 && input <= 57)
		{
			number += input;
		}
		else if (number != "")
		{
			answer += stoi(number);
			number = "";
		}
	}
	if (number != "")
	{
		answer += stoi(number);
	}
	cout << answer;
}