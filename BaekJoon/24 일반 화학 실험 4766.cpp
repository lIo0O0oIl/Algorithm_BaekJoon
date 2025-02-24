// https://www.acmicpc.net/problem/4766

#include <iostream>
using namespace std;

int main()
{
	float input, temp = 0;

	cout.precision(2);
	cout << fixed;
	cin >> temp;

	while (true)
	{
		cin >> input;
		if (input == 999) break;
		cout << input - temp << '\n';
		temp = input;
	}
}