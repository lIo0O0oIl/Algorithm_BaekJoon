// https://www.acmicpc.net/problem/15873

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input, a;
	bool isis = false;
	cin >> input;
	if (input[input.size() - 1] == '0') isis = true;
	for (int i = 0; i < input.size() - 1; i++)
	{
		if (isis == true && i == input.size() - 2) break;
		a += input[i];
	}
	if (isis)
	{
		cout << stoi(a) + 10;
	}
	else
	{
		cout << stoi(a) + (input[input.size() - 1] - '0');
	}
}