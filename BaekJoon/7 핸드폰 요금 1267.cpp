// https://www.acmicpc.net/problem/1267

#include <iostream>
using namespace std;

int main() {
	int n, input, y = 0, m = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		y += (input / 30 + 1) * 10;
		m += (input / 60 + 1) * 15;
	}

	//cout << y << " " << m;
	if (y > m) {
		cout << "M " << m;
	}
	else if (m > y) {
		cout << "Y " << y;
	}
	else {
		cout << "Y M " << y;
	}
}