// https://www.acmicpc.net/problem/13163

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
		int index = input.find(' ');
		cout << "god";
		for (int j = index; j < input.size(); j++)
		{
			if (input[j] == ' ') continue;
			cout << input[j];
		}
		cout << '\n';
	}
}