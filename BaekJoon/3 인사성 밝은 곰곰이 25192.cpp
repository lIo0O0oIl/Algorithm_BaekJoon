// https://www.acmicpc.net/problem/25192

#include <iostream>
#include <set>
using namespace std;

int main()
{
	set<string> s;
	int n, count = 0;
	string input;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (input == "ENTER")
		{
			s.clear();
			continue;
		}
		if (s.find(input) == s.end())
		{
			count++;
			s.insert(input);
		}
	}
	cout << count;
}