// https://www.acmicpc.net/problem/18408

#include <iostream>
using namespace std;

int main()
{
	int temp, one = 0;
	for (int i = 0; i < 3; i++)
	{
		cin >> temp;
		if (temp == 1) one++;
	}
	if (one >= 2) cout << 1;
	else cout << 2;
}