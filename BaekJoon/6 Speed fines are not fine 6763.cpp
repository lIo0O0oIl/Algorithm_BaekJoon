// https://www.acmicpc.net/problem/6763

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	if (b >= a)
	{
		int temp = b - a;
		if (temp >= 1 && temp <= 20) cout << "You are speeding and your fine is $100.";
		else if (temp >= 21 && temp <= 30) cout << "You are speeding and your fine is $270.";
		else cout << "You are speeding and your fine is $500.";
	}
	else cout << "Congratulations, you are within the speed limit!";
}