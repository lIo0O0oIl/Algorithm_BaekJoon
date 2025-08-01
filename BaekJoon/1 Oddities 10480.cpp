// https://www.acmicpc.net/problem/10480

#include <iostream>
using namespace std;

int main()
{
	int t, temp;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> temp;
		if (temp == 0) cout << temp << " is odd\n";
		else if (temp % 2 == 0) cout << temp << " is even\n";
		else cout << temp << " is odd\n";
	}
}