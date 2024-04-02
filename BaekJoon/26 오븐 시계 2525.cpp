// https://www.acmicpc.net/problem/2525

#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (b + c >= 60) {
		b += c;
		while (b >= 60) {
			b -= 60;
			a++;
			if (a >= 24) {
				a = 0;
			}
		}
		cout << a << " " << b;
	}
	else {
		cout << a << " " << b + c;
	}
}