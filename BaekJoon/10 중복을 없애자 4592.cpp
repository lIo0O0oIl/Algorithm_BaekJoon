// https://www.acmicpc.net/problem/4592

#include <iostream>
using namespace std;

int main()
{
	int n, input, current = 0;
	while (true)
	{
		cin >> n;
		if (n == 0) break;
		for (int i = 0; i < n; i++)
		{
			cin >> input;
			if (current == input) continue;
			current = input;
			cout << input << ' ';
		}
		cout << "$\n";
		current = 0;
	}
}