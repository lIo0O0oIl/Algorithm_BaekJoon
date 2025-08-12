// https://www.acmicpc.net/problem/15633

#include <iostream>
using namespace std;

int main()
{
	int n, answer = 0;
	cin >> n;
	answer += n;
	for (int i = 1; i <= n / 2; i++)
	{
		if (n % i == 0) answer += i;
	}
	cout << answer * 5 - 24;
}