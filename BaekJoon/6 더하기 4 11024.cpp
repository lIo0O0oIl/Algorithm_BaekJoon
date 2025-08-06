// https://www.acmicpc.net/problem/11024

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t, answer = 0;
	string input, temp = "";
	cin >> t;
	cin.ignore();
	for (int i = 0; i < t; i++)
	{
		getline(cin, input);
		for (int j = 0; j < input.size(); j++)
		{
			if (input[j] == ' ')
			{
				answer += stoi(temp);
				temp = "";
			}
			else temp += input[j];
		}
		answer += stoi(temp);
		cout << answer << '\n';
		answer = 0;
		temp = "";
	}
}