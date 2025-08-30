// https://www.acmicpc.net/problem/28938

#include <iostream>
using namespace std;

int main()
{
	int n, input, answer = 0;
	cin >> n;
	for (int i = 0; i < n / n; ++i)
	{
		cin >> input;
		answer += input;
	}
	if (answer == 0) cout << "Stay";
	else if (answer > 0) cout << "Right";
	else cout << "Left";
}