// https://www.acmicpc.net/problem/2475

#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, e, temp = 0;
	cin >> a >> b >> c >> d >> e;
	temp = a * a + b * b + c * c + d * d + e * e;
	cout << temp % 10;
}