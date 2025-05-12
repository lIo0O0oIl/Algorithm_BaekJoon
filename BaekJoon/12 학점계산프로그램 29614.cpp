// https://www.acmicpc.net/problem/29614

#include <iostream>
using namespace std;

int main()
{
	int count = 0;
	float answer = 0;
	string input;
	cin >> input;

	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] == 'A') answer += 4;
		else if (input[i] == 'B') answer += 3;
		else if (input[i] == 'C') answer += 2;
		else if (input[i] == 'D') answer += 1;
		else if (input[i] == '+')
		{
			count--;
			answer += 0.5f;
		}
		count++;
	}
	cout << answer / count;
}