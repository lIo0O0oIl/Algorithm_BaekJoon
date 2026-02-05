// https://www.acmicpc.net/problem/23544

#include <iostream>
#include <set>	
using namespace std;

int main()
{
	int n;
	string input;
	set<string> s;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		s.insert(input);
	}
	cout << n - s.size();
}