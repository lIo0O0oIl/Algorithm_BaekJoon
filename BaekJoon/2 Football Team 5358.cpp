// https://www.acmicpc.net/problem/5358

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	while (getline(cin, input))
	{
		for (int i = 0; i < input.size(); i++)
		{
			switch (input[i])
			{
			case 'i':
				cout << 'e';
				break;
			case 'e':
				cout << 'i';
				break;
			case 'I':
				cout << 'E';
				break;
			case 'E':
				cout << 'I';
				break;
			default:
				cout << input[i];
				break;
			}
		}
		cout << '\n';
	}
}