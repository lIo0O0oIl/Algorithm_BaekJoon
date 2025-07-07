// https://www.acmicpc.net/problem/5355

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t;
	float num;
	string input;
	cin >> t;
	cout << fixed;
	cout.precision(2);
	for (int i = 0; i < t; i++)
	{
		cin >> num;
		cin.ignore();
		getline(cin, input);
		for (int j = 0; j < input.size(); j++)
		{
			if (input[j] == '@') num *= 3;
			else if (input[j] == '%') num += 5;
			else if (input[j] == '#') num -= 7;
		}
		cout << num << '\n';
	}
}