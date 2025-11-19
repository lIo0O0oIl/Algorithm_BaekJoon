// https://www.acmicpc.net/problem/25915

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	char c;
	string answer = "ILOVEYONSEI";
	int sum = 0;
	cin >> c;
	for (int i = 0; i < answer.size(); i++)
	{
		sum += abs(c - answer[i]);
		c = answer[i];
	}
	cout << sum;
}