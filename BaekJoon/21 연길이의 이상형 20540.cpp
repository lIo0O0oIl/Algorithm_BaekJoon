// https://www.acmicpc.net/problem/20540

#include <iostream>
using namespace std;

int main()
{
	string input;
	cin >> input;
	for (int i = 0; i < input.size(); i++)
	{
		switch (input[i])
		{
		case 'E': cout << 'I'; break;
		case 'I': cout << 'E'; break;
		case 'S': cout << 'N'; break;
		case 'N': cout << 'S'; break;
		case 'T': cout << 'F'; break;
		case 'F': cout << 'T'; break;
		case 'P': cout << 'J'; break;
		case 'J': cout << 'P'; break;
		default:
			break;
		}
	}
}