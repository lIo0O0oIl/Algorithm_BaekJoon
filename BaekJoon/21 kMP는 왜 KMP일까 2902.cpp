// https://www.acmicpc.net/problem/2902

#include <iostream>
using namespace std;

int main()
{
	string input, answer = "";
	cin >> input;
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] >= 65 && input[i] <= 90)
		{
			answer += input[i];
		}
	}
	cout << answer;
}