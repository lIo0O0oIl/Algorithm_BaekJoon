// https://www.acmicpc.net/problem/9296

#include <iostream>
using namespace std;

int main()
{
	int t, length, wrong = 0;
	string input, answer;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> length >> answer >> input;
		for (int j = 0; j < length; j++)
		{
			if (answer[j] != input[j]) wrong++;
		}
		cout << "Case " << i + 1 << ": " << wrong << '\n';
		wrong = 0;
	}
}