// https://www.acmicpc.net/problem/30402

#include <iostream>
using namespace std;

int main() {
	char input;
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			cin >> input;
			switch (input)
			{
			case 'w':
				cout << "chunbae";
				return 0;
			case 'b':
				cout << "nabi";
				return 0;
			case 'g':
				cout << "yeongcheol";
				return 0;
			default:
				break;
			}
		}
	}
}