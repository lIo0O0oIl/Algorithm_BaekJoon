// https://www.acmicpc.net/problem/26531

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	char x, y;
	cin >> a >> x >> b >> y >> c;
	if (a + b == c) cout << "YES";
	else cout << "NO";
}