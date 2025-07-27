// https://www.acmicpc.net/problem/17912

#include <iostream>
using namespace std; 

int main()
{
	int n, temp, small = 1000000001, day = 0;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> temp;
		if (temp < small)
		{
			small = temp;
			day = i;
		}
	}
	cout << day;
}