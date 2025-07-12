// https://www.acmicpc.net/problem/7567

#include <iostream>
using namespace std;

int main()
{
	string input;
	char current = 't';
	int height = 0;
	cin >> input;
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] != current)
		{
			current = input[i];
			height += 10;
		}
		else height += 5;
	}
	cout << height;
}