// https://www.acmicpc.net/problem/23805

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n * 3; j++) cout << '@';
		for (int j = 0; j < n; j++) cout << ' ';
		for (int j = 0; j < n; j++) cout << '@';
		cout << '\n';
	}
	for (int i = 0; i < n * 3; i++)
	{
		for (int j = 0; j < n; j++) cout << '@';
		for (int j = 0; j < n; j++) cout << ' ';
		for (int j = 0; j < n; j++) cout << '@';
		for (int j = 0; j < n; j++) cout << ' ';
		for (int j = 0; j < n; j++) cout << '@';
		cout << '\n';
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) cout << '@';
		for (int j = 0; j < n; j++) cout << ' ';
		for (int j = 0; j < n * 3; j++) cout << '@';
		cout << '\n';
	}
}