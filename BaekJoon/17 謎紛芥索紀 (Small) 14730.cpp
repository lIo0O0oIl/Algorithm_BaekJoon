// https://www.acmicpc.net/problem/14730

#include <iostream>
using namespace std;

int main()
{
	int n, a, b, answer = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		answer += a * b;
	}
	cout << answer;
}