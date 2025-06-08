// https://www.acmicpc.net/problem/18198

#include <iostream>
using namespace std;

int main()
{
	string input;
	bool is_A = true;
	int a = 0, b = 0;
	cin >> input;
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] == 'A') is_A = true;
		else if (input[i] == 'B') is_A = false;
		else if (input[i] == '1') (is_A == true ? a++ : b++);
		else if (input[i] == '1') (is_A == true ? a += 2 : b += 2);
	}
	cout << (is_A ? 'A' : 'B');
}