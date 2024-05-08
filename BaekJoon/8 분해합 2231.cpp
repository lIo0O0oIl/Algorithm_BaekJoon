// https://www.acmicpc.net/problem/2231

#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int n, answer = 0;
	string number;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		number = to_string(i);
		answer = i;
		for (int j = 0; j < number.size(); j++)
		{
			answer += number[j] - '0';
		}
		if (n == answer)
		{
			answer = i;
			break;
		}
		else
		{
			answer = 0;
		}
	}
	cout << answer;
}

/*
int to string
to_string

string to int
stoi


246
256

235



*/