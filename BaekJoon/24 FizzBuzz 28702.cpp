// https://www.acmicpc.net/problem/28702

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	int now, nowIndex;
	for (int i = 0; i < 3; i++)			// 0, 1, 2
	{
		cin >> input;
		if (input[0] >= 49 && input[0] <= 57)
		{
			now = stoi(input);
			nowIndex = i;
		}
	}

	for (int i = 0; i < 3 - nowIndex; i++)		// 0, 1
	{
		now++;
	}

	int n = now;
	cin >> n;
	if (n % 3 == 0 && n % 5 == 0)
	{
		cout << "FizzBuzz";
		return 0;
	}
	else if (n % 3 == 0)
	{
		cout << "Fizz";
		return 0;
	}
	else if (n % 5 == 0)
	{
		cout << "Buzz";
		return 0;
	}
	else
	{
		cout << n;
	}
}