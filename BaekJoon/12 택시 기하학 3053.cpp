// https://www.acmicpc.net/problem/3053

#include <iostream>
using namespace std;

int main()
{
	double r;
	cin >> r;
	cout << fixed;
	cout.precision(6);
	cout << r * r * 3.14159265358979 << '\n';
	cout << r * r * 2;
}