// https://www.acmicpc.net/problem/14681

#include <iostream>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;

	if (x > 0) {		// x 가 0보다 크면 1, 4분면
		cout << (y > 0 ? 1 : 4);		// y 가 0보다 크면 1분면, 작으면 4분면
	}
	else {		// x 가 0보다 작으면 2, 3분면
		cout << (y > 0 ? 2 : 3);		// y가 0보다 크면 2분면, 작으면 3분면
	}
}