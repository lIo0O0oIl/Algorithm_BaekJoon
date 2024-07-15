// https://www.acmicpc.net/problem/4458

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	string input;
	cin >> n;
	cin.ignore();

	for (int i = 0; i < n; i++)
	{
		getline(cin, input);
		if ('a' <= input[0] && 'z' >= input[0])
		{
			input[0] -= 32;
		}
		cout << input << '\n';
	}
}