// https://www.acmicpc.net/problem/15000

#include <iostream>
using namespace std;

int main()
{
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); ++i)
	{
		s[i] -= 32;
	}
	cout << s;
}
