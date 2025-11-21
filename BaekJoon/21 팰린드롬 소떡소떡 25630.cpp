// https://www.acmicpc.net/problem/25630

#include <iostream>
using namespace std;

int main()
{
	int n, change = 0;
	string input;
	cin >> n >> input;
	for (int i = 0; i < n / 2; i++)
	{
		//cout << input[i] << ' ' << input[input.size() - i - 1] << endl;
		//cout << i << ' ' << input.size() - i - 1 << endl;
		if (input[i] != input[input.size() - i - 1])
		{
			change++;
		}
	}
	cout << change;
}