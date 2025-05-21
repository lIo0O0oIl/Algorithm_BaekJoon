// https://www.acmicpc.net/problem/1871

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	int n;
	string car;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> car;
		int letter = ((car[0] - 65) * 26 * 26) +
			((car[1] - 65) * 26) + (car[2] - 65);
		int number = stoi(car.substr(4));
		if (abs(letter - number) <= 100) cout << "nice\n";
		else cout << "not nice\n";
	}
}