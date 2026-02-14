// https://www.acmicpc.net/problem/34454

#include <iostream>
using namespace std;

int main()
{
	int n, c, p;
	cin >> n >> c >> p;
	if (c * p >= n) cout << "yes";
	else cout << "no";
}