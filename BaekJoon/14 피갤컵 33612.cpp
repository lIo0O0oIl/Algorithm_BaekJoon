// https://www.acmicpc.net/problem/33612

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int month = (8 + (7 * (n - 1))) % 12;
	int year = 2024 + (8 + (7 * (n - 1))) / 13;
	cout << year << ' ' << (month == 0 ? 12 : month);
}