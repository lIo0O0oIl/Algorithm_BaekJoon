// https://www.acmicpc.net/problem/10808

#include <iostream>
using namespace std;

int arr[27];

int main()
{
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		arr[s[i] - 97]++;
	}
	for (int i = 0; i < 26; i++)
	{
		cout << arr[i] << ' ';
	}
}