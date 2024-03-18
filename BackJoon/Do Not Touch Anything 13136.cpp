// https://www.acmicpc.net/problem/13136

#include <iostream>
using namespace std;

int main() {
	int r, c, n;
	cin >> r >> c >> n;
	r = r % n != 0 ? (r / n) + 1 : r / n;
	c = c % n != 0 ? (c / n) + 1 : c / n;
	cout << r * c;
}