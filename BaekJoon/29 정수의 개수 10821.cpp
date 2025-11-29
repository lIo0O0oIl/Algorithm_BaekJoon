// https://www.acmicpc.net/problem/10821

#include <iostream>
using namespace std;

int main()
{
	string input;
	int answer = 0;
	cin >> input;
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] == ',') answer++;
	}
	cout << answer + 1;
}