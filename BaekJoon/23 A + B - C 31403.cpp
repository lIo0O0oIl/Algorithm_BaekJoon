// https://www.acmicpc.net/problem/31403

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << a + b - c << '\n';
	string str = to_string(a) + to_string(b);
	cout << stoi(str) - c;
}