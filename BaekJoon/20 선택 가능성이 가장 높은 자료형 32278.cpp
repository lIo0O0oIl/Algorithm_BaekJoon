// https://www.acmicpc.net/problem/32278

#include <iostream>
using namespace std;

int main()
{
	long long a;
	cin >> a;
	if (a >= -32768 && a <= 32767)
	{
		cout << "short";
	}
	else if (a >= -2147483648 && a <= 2147483647)
	{
		cout << "int";
	}
	else
	{
		cout << "long long";
	}
}4