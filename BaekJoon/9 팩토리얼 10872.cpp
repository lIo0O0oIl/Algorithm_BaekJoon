// https://www.acmicpc.net/problem/10872

#include <iostream>
using namespace std;

int main()
{
	int n;
	long long answer = 1;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		answer *= i;
	}
	cout << answer;
}