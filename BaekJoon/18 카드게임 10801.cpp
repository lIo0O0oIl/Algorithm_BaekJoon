// https://www.acmicpc.net/problem/10801

#include <iostream>
using namespace std;

int main()
{
	int a[11];
	int input, aWin = 0, bWin = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < 10; i++)
	{
		cin >> input;
		if (a[i] > input)aWin++;
		else if (a[i] == input)
		{
			aWin++;
			bWin++;
		}
		else bWin++;
	}
	if (aWin > bWin) cout << "A";
	else if (aWin == bWin) cout << "D";
	else cout << "B";
}