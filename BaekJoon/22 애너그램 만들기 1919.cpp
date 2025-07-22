// https://www.acmicpc.net/problem/1919

#include <iostream>
#include <math.h>
using namespace std;

int alphabet[27];

int main()
{
	string a, b;
	int count = 0;
	cin >> a >> b;
	for (int i = 0; i < a.size(); i++)
	{
		alphabet[a[i] - 97]++;
	}
	for (int i = 0; i < b.size(); i++)
	{
		alphabet[b[i] - 97]--;
	}
	for (int i = 0; i < 27; i++)
	{
		count += abs(alphabet[i]);
	}
	cout << count;
}