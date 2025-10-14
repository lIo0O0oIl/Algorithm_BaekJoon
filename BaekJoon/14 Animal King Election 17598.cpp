// https://www.acmicpc.net/problem/17598

#include <iostream>
using namespace std;

int main()
{
	int lionCount = 0, tigerCount = 0;
	string input;
	for (int i = 0; i < 9; i++)
	{
		cin >> input;
		if (input == "Lion") lionCount++;
		else if (input == "Tiger") tigerCount++;
	}
	if (lionCount > tigerCount) cout << "Lion";
	else cout << "Tiger";
}