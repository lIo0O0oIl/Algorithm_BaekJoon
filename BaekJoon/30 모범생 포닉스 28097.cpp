// https://www.acmicpc.net/problem/28097

#include <iostream>
using namespace std;

int main() {
	int n, input, all = 0;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> input;
		all += input;
	}
	all += (n - 1) * 8;
	cout << all / 24 << ' ' << all % 24;
}
