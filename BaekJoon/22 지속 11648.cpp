// https://www.acmicpc.net/problem/11648

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int answer = 0;
	string input;
	cin >> input;
	if (input.size() <= 1)
	{
		cout << 0;
		return 0;
	}
	while (true)
	{
		int n = 1;
		for (int i = 0; i < input.size(); i++)
		{
			int num = input[i] - '0';
			n *= num;
		}
		answer++;
		input = to_string(n);
		if (n < 10) break;
	}
	cout << answer;
}