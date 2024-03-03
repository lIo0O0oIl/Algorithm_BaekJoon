// https://www.acmicpc.net/problem/25640

#include <iostream>
using namespace std;

int main() {
	int n, answer = 0;
	string me, input;
	cin >> me >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (me == input)
		{
			answer++;
		}
	}
	cout << answer;
}