// https://www.acmicpc.net/problem/5598

#include <iostream>
using namespace std;

int main()
{
	string input;
	cin >> input;
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] - 3 < 65) cout << (char)(input[i] + 23);
		else cout << (char)(input[i] - 3);
	}
}