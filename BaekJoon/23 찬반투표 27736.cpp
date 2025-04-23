// https://www.acmicpc.net/problem/27736

#include <iostream>
using namespace std;

int main()
{
	int n, input, yes = 0, no = 0, abstain = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (input == 1) yes++;
		else if (input == -1) no++;
		else if (input == 0) abstain++;
	}
	if (abstain >= yes + no) cout << "INVALID";
	else if (yes > no) cout << "APPROVED";
	else cout << "REJECTED";
}