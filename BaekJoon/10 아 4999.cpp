// https://www.acmicpc.net/problem/4999

#include <iostream>
using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;
	cout << (a.size() >= b.size() ? "go" : "no");
}