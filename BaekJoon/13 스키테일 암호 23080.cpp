// https://www.acmicpc.net/problem/23080

#include <iostream>
using namespace std;

int main()
{
	int k;
	string s;
	cin >> k >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (i % k == 0) cout << s[i];
	}
}