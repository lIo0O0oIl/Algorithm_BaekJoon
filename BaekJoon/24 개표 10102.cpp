// https://www.acmicpc.net/problem/10102

#include <iostream>
using namespace std;

int main()
{
	int n, a = 0, b = 0;
	char input;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> input;
		if (input == 'A') a++;
		else b++;
	}
	if (a == b) cout << "Tie";
	else if (a > b) cout << "A";
	else cout << "B";
}