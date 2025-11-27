// https://www.acmicpc.net/problem/30822

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, u = 0, o = 0, s = 0, p = 0, c = 0;
	char input;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (input == 'u') u++;
		else if (input == 'o') o++;
		else if (input == 's') s++;
		else if (input == 'p') p++;
		else if (input == 'c') c++;
	}
	cout << min({ u, o, s, p, c });
}