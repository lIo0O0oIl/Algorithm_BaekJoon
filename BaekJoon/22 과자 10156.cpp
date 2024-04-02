// https://www.acmicpc.net/problem/10156

#include <iostream>
using namespace std;

int main() {
	int k, n, m, cnt;
	cin >> k >> n >> m;
	cnt =  k * n - m;
	if (cnt < 0) {
		cout << 0;
	}
	else {
		cout << cnt;
	}
}