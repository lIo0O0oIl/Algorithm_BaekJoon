// https://www.acmicpc.net/problem/26546

#include <iostream>
using namespace std; 

int main()
{
	int n, a , b;
	string input, answer = "";
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> input >> a >> b;
		for (int j = 0; j < input.size(); ++j)
		{
			if (j + 1 > a && j + 1 <= b) continue;
			answer += input[j];
		}
		cout << answer << '\n';
		answer = "";
	}
}