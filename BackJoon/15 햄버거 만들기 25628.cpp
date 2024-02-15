// https://www.acmicpc.net/problem/25628

#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	cout << (a / 2 >= b ? b : a / 2);
}