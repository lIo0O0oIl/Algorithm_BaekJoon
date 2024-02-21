// https://www.acmicpc.net/problem/21964

#include <iostream>
using namespace std;

int main() {
	int n;
	string s;
	cin >> n >> s;
	for (int i = n - 5; i < n; i++)
	{
		cout << s[i];
	}
}