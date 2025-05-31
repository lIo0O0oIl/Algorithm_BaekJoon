// https://www.acmicpc.net/problem/33964

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a, b;
	string as = "", bs = "";
	cin >> a >> b;
	for (int i = 0; i < a; ++i) as += "1";
	for (int i = 0; i < b; ++i) bs += "1";
	cout << stoi(as) + stoi(bs);
}