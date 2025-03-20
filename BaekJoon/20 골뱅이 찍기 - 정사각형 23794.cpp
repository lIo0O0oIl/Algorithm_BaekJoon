// https://www.acmicpc.net/problem/23794

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n + 2; i++) cout << '@';
	cout << '\n';
	for (int i = 0; i < n; i++)
	{
		cout << '@';
		for (int j = 0; j < n; j++) cout << ' ';
		cout << "@\n";
	}
	for (int i = 0; i < n + 2; i++) cout << '@';
}