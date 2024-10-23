// https://www.acmicpc.net/problem/31654

#include <iostream>
using namespace std;

int main()
{
	long long a, b, c;
	cin >> a >> b >> c;
	if (a + b == c) cout << "correct!";
	else cout << "wrong!";
}