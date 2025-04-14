// https://www.acmicpc.net/problem/31907

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) cout << 'G';
		for (int j = 0; j < n * 3; j++) cout << '.';
		cout << '\n';
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) cout << '.';
		for (int j = 0; j < n; j++) cout << 'I';
		for (int j = 0; j < n; j++) cout << '.';
		for (int j = 0; j < n; j++) cout << 'T';
		cout << '\n';
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n * 2; j++) cout << '.';
		for (int j = 0; j < n; j++) cout << 'S';
		for (int j = 0; j < n; j++) cout << '.';
		cout << '\n';
	}
}