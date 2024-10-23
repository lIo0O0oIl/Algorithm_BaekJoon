// https://www.acmicpc.net/problem/31615

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	string input = to_string(a + b);
	cout << input.size();
}