// https://www.acmicpc.net/problem/22015

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << (max({ a, b, c }) * 3) - (a + b + c);
}