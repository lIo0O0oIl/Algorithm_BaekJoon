// https://www.acmicpc.net/problem/5613

#include <iostream>
using namespace std;

int main()
{
	int answer, input;
	char operatorInput, currentOperator = ' ';
	cin >> input >> currentOperator;
	answer = input;
	while (true)
	{
		cin >> input >> operatorInput;
		if (currentOperator == '+') answer += input;
		else if (currentOperator == '-') answer -= input;
		else if (currentOperator == '*') answer *= input;
		else if (currentOperator == '/') answer /= input;

		if (operatorInput == '=')
		{
			cout << answer;
			return 0;
		}
		currentOperator = operatorInput;
	}
}