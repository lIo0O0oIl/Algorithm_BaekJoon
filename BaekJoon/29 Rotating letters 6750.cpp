// https://www.acmicpc.net/problem/6750

#include <iostream>
using namespace std;

int main()
{
	string input;
	cin >> input;
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] != 'I' && input[i] != 'O'
			&& input[i] != 'S' && input[i] != 'H'
			&& input[i] != 'Z' && input[i] != 'X'
			&& input[i] != 'N')
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
}