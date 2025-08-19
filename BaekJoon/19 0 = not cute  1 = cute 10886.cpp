// https://www.acmicpc.net/problem/10886

#include <iostream>
using namespace std;

int main()
{
	int n, temp, cute = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		if (temp == 1) cute++;
	}
	cout << (cute > n / 2 ? "Junhee is cute!" : "Junhee is not cute!");
}