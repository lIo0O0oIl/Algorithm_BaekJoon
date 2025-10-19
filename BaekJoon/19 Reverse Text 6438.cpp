// https://www.acmicpc.net/problem/6438

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
		for (int j = input.size() - 1; j >= 0; --j)
		{
			cout << input[j];
		}
		cout << '\n';
	}
}