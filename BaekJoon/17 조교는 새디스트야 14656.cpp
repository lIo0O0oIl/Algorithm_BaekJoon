// https://www.acmicpc.net/problem/14656

#include <iostream>
using namespace std;

int main()
{
	int n, input, answer = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> input;
		if (input != i) answer++;
	}
	cout << answer;
}