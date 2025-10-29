// https://www.acmicpc.net/problem/5988

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
		if ((input[input.size() - 1] - '0') % 2 == 0) cout << "even\n";
		else cout << "odd\n";
	}
}