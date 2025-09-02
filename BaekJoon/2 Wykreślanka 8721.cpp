// https://www.acmicpc.net/problem/8721

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, now = 1, remove = 0;
	cin >> n;
	vector<int> vec(n);
	for (int i = 0; i < n; i++)
	{
		cin >> vec[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (vec[i] == now) now++;
		else remove++;
	}
	cout << remove;
}