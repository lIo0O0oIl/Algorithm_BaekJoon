// https://www.acmicpc.net/problem/5789

#include <iostream>
using namespace std;

int main()
{
	int n;
	string input;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (input[input.size() / 2 - 1] == input[input.size() / 2])
		{
			cout << "Do-it\n";
		}
		else cout << "Do-it-Not\n";
	}
}