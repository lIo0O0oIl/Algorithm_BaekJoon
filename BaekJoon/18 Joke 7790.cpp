// https://www.acmicpc.net/problem/7790

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	int count = 0;
	while (getline(cin, input))
	{
		while (input.find("joke") != string::npos)
		{
			int pos = input.find("joke");
			input.replace(pos, 4, "");
			count++;
		}
	}
	cout << count;
}