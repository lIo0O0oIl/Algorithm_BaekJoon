// https://www.acmicpc.net/problem/31866

#include <iostream>
using namespace std;

int main()
{
	int j, i;
	cin >> j >> i;
	if ((j == 1 || j == 3 || j == 4)
		&& (i == 1 || i == 3 || i == 4))
	{
		cout << '=';
		return 0;
	}
	if ((j == 0 || j == 2 || j == 5)
		&& (i == 1 || i == 3 || i == 4))
	{
		cout << '>';
		return 0;
	}
	if ((j == 1 || j == 3 || j == 4)
		&& (i == 0 || i == 2 || i == 5))
	{
		cout << '<';
		return 0;
	}
	
	if (j == 0 && i == 0) { cout << '='; return 0; }
	if (j == 2 && i == 2) { cout << '='; return 0; }
	if (j == 5 && i == 5) { cout << '='; return 0; }
	
	if (j == 0 && i == 5) { cout << '<'; return 0; }
	if (j == 5 && i == 0) { cout << '>'; return 0; }
	if (j == 0 && i == 2) { cout << '>'; return 0; }
	if (j == 2 && i == 0) { cout << '<'; return 0; }
	if (j == 2 && i == 5) { cout << '>'; return 0; }
	if (j == 5 && i == 2) { cout << '<'; return 0; }
}