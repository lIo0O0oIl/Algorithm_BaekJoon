// https://www.acmicpc.net/problem/5363

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, blank = 0;
	string input, back = "";
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		getline(cin, input);
		for (int j = 0; j < input.size(); j++)
		{
			if (blank != 2)
			{
				back += input[j];
				if (input[j] == ' ') blank++;
			}
			else
			{
				cout << input[j];
			}
		}
		cout << ' ' << back << '\n';
		back = "";
		blank = 0;
	}
}