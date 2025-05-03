// https://www.acmicpc.net/problem/15813

#include <iostream>
using namespace std; 

int main()
{
	int n, answer = 0;
	char c;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> c;
		answer += c - 64;
	}
	cout << answer;
}