// https://www.acmicpc.net/problem/5342

#include <iostream>
using namespace std;

int main()
{
	string input;
	float answer = 0;
	cout << fixed;
	cout.precision(2);
	while (true)
	{
		cin >> input;
		if (input == "EOI") break;
		if (input == "Paper") answer += 57.99f;
		else if (input == "Printer") answer += 120.50f;
		else if (input == "Planners") answer += 31.25f;
		else if (input == "Binders") answer += 22.50f;
		else if (input == "Calendar") answer += 10.95f;
		else if (input == "Notebooks") answer += 11.20f;
		else if (input == "Ink") answer += 66.95f;
	}
	cout << '$' << answer;
}