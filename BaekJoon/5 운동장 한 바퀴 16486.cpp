// https://www.acmicpc.net/problem/16486

#include <iostream>
using namespace std;

int main()
{
	float d1, d2;
	float pi = 3.141592;
	cin >> d1 >> d2;
	cout << fixed;
	cout.precision(6);
	cout << (d1 * 2) + (2 * pi * d2);
}