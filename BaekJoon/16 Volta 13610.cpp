// https://www.acmicpc.net/problem/13610

#include <iostream>
using namespace std;

int main()
{
	int a, b, time = 1, aGoal = 0, bGoal = 0;
	cin >> a >> b;
	while (true)
	{
		if (time % a == 0) aGoal++;
		if (aGoal - 1 > bGoal)
		{
			cout << aGoal;
			return 0;
		}
		if (time % b == 0) bGoal++;
		time++;
	}
}