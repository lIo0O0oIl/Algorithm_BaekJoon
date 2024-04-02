// https://www.acmicpc.net/problem/10807

#include <iostream>
using namespace std;

int main() {
	int n, v, cnt = 0;
	int input[101];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input[i];
	}
	cin >> v;
	for (int i = 0; i < n; i++)
	{
		if (input[i] == v) {
			cnt++;
		}
	}
	cout << cnt;
}