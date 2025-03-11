// https://www.acmicpc.net/problem/15781

#include <iostream>
using namespace std;

int main()
{
	int n, m, input;
	long long bigN = 0, bigM = 0;
	cin >> n >> m; 

	for (int i = 0; i < n; ++i)
	{
		cin >> input;
		if (input > bigN)
		{
			bigN = input;
		}
	} 

	for (int i = 0; i < m; ++i)
	{
		cin >> input;
		if (input > bigM)
		{
			bigM = input;
		}
	} 

	cout << bigN + bigM;
}