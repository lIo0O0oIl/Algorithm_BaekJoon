// https://www.acmicpc.net/problem/5751

#include <iostream>
using namespace std;

int main()
{
	int time, input, mary = 0, john = 0;
	while (true)
	{
		cin >> time;
		if (time == 0) break;
		for (int i = 0; i < time; i++)
		{
			cin >> input;
			if (input == 0) mary++;
			else john++;
		}
		cout << "Mary won " << mary << " times and John won " << john << " times\n";
		mary = 0;
		john = 0;
	}
}