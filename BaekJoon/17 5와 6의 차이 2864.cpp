// https://www.acmicpc.net/problem/2864

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a, b, tempA, tempB;
	cin >> a >> b;
	tempA = a;
	tempB = b;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] == '5')
		{
			a[i] = '6';
		}
		else if (a[i] == '6')
		{
			tempA[i] = '5';
		}
	}
	for (int i = 0; i < b.size(); i++)
	{
		if (b[i] == '5')
		{
			b[i] = '6';
		}
		else if (b[i] == '6')
		{
			tempB[i] = '5';
		}
	}
	cout << stoi(tempA) + stoi(tempB) << ' ' << stoi(a) + stoi(b);
}