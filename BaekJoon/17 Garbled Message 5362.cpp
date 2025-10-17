// https://www.acmicpc.net/problem/5362

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	while (getline(cin, input))
	{
		while (input.find("iiing") != string::npos)
		{
			int pos = input.find("iiing");
			input.replace(pos, 5, "th");
		}
		cout << input << '\n';
	}
}