// https://www.acmicpc.net/problem/21866

#include <iostream>
using namespace std;

int score[] = { 100, 100, 200, 200, 300, 300, 400, 400, 500 };

int main()
{
	int input, sum = 0;
	bool is_hacker = false;
	for (int i = 0; i < 9; i++)
	{
		cin >> input;
		sum += input;
		if (input > score[i]) is_hacker = true;
	}
	if (is_hacker) cout << "hacker";
	else if (sum >= 100) cout << "draw";
	else cout << "none";
}