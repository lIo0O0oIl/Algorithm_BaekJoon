// https://www.acmicpc.net/problem/27110

#include <iostream>
using namespace std;

int main() {
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	if (a > n) a = n;
	if (b > n) b = n;
	if (c > n) c = n;
	cout << a + b + c;
}