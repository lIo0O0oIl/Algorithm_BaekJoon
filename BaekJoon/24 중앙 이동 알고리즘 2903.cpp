// https://www.acmicpc.net/problem/2903

#include <iostream>
using namespace std;

int main() {
	int n, answer = 3;
	cin >> n;
	for (int i = 1; i < n; i++)
	{
		answer = answer * 2 - 1;
	}
	cout << answer * answer;
}