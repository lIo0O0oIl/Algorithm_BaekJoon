// https://www.acmicpc.net/problem/15233

#include <iostream>
#include <set>
using namespace std;

int main()
{
	int an, bn, g;
	string input;
	set<string> a, b;
	cin >> an >> bn >> g;
	for (int i = 0; i < an; i++)
	{
		cin >> input;
		a.insert(input);
	}
	for (int i = 0; i < bn; i++)
	{
		cin >> input;
		b.insert(input);
	}
	an = 0;
	bn = 0;
	for (int i = 0; i < g; i++)
	{
		cin >> input;
		if (a.find(input) != a.end()) an++;
		if (b.find(input) != b.end()) bn++;
	}
	if (an == bn) cout << "TIE";
	else cout << (an > bn ? "A" : "B");
}