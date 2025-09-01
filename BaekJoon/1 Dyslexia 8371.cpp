// https://www.acmicpc.net/problem/8371

#include <iostream>
using namespace std;

int main()
{
	int n, answer = 0;
	string a, b;
	cin >> n >> a >> b;
	for (int i = 0; i < n; i++)
	{
		if (a[i] != b[i]) answer++;
	}
	cout << answer;
}