// https://www.acmicpc.net/problem/23348

#include <iostream>
using namespace std; 

int main()
{
	int a, b, c, t, aInput, bInput, cInput, now = 0, big = 0;
	cin >> a >> b >> c >> t;
	for (int i = 0; i < t; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cin >> aInput >> bInput >> cInput;
			now += (aInput * a) + (bInput * b) + (cInput * c);
		}
		if (now > big) big = now;
	}
	cout << big;
}