// https://www.acmicpc.net/problem/23795

#include <iostream>
using namespace std;

int main() {
	int n, answer = 0;
	while (true)
	{
		cin >> n;
		if (n == -1) break;
		answer += n;
	}
	cout << answer;
}