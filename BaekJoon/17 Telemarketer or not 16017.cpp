// https://www.acmicpc.net/problem/16017

#include <iostream>
using namespace std;

int main()
{
	int input1, input2, input3, input4;
	cin >> input1 >> input2 >> input3 >> input4;
	if (input1 == 8 || input1 == 9)
	{
		if (input2 == input3)
		{
			if (input4 == 8 || input4 == 9)
			{
				cout << "ignore";
				return 0;
			}
		}
	}
	cout << "answer";
}