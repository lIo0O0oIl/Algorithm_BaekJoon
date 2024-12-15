// https://www.acmicpc.net/problem/30008

#include <iostream>
using namespace std;

int main()
{
	int n, k, input;
	cin >> n >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> input;
		int temp = (input * 100) / n;
		if (temp <= 4) cout << 1 << ' ';
		else if (temp > 4 && temp <= 11) cout << 2 << ' ';
		else if (temp > 11 && temp <= 23) cout << 3 << ' ';
		else if (temp > 23 && temp <= 40) cout << 4 << ' ';
		else if (temp > 40 && temp <= 60) cout << 5 << ' ';
		else if (temp > 60 && temp <= 77) cout << 6 << ' ';
		else if (temp > 77 && temp <= 89) cout << 7 << ' ';
		else if (temp > 89 && temp <= 96) cout << 8 << ' ';
		else if (temp > 96 && temp <= 100) cout << 9 << ' ';
	}
}