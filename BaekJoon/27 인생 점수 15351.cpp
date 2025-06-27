// https://www.acmicpc.net/problem/15351

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, answer = 0;
	string input;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		getline(cin, input);
		for (int j = 0; j < input.size(); j++)
		{
			if (input[j] == ' ') continue;
			answer += input[j] - 64;
		}
		if (answer == 100) cout << "PERFECT LIFE\n";
		else cout << answer << '\n';
		answer = 0;
	}
}