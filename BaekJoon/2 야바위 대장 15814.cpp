// https://www.acmicpc.net/problem/15814

#include <iostream>
using namespace std;

int main()
{
	int t, a, b;
	string input;
	cin >> input >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;
		char temp = input[b];
		input[b] = input[a];
		input[a] = temp;
	}
	cout << input;
}