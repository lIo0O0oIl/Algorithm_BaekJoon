// https://www.acmicpc.net/problem/2712

#include <iostream>
using namespace std;

int main()
{
	int t;
	float input;
	string s;
	cin >> t;
	cout << fixed;
	cout.precision(4);
	for (int i = 0; i < t; i++)
	{
		cin >> input >> s;
		if (s == "kg") cout << input * 2.2046f << " lb\n";
		else if (s == "lb") cout << input * 0.4536f << " kg\n";
		else if (s == "l") cout << input * 0.2642f << " g\n";
		else if (s == "g") cout << input * 3.7854f << " l\n";
	}
}