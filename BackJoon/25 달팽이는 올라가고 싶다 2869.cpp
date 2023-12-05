// https://www.acmicpc.net/problem/2869

#include <iostream>
using namespace std;

int main() {
	int a, b, v;
	cin >> a >> b >> v;
	if ((v - a) % (a - b) != 0) {		// 한번 나눠지지 않으면
		cout << (v - a) / (a - b) + 2;
	}
	else {
		cout << (v - a) / (a - b) + 1;
	}
}