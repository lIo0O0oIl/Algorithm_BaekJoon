// https://www.acmicpc.net/problem/26307

#include <iostream>
using namespace std;

int main()
{
	int h, m;
	cin >> h >> m;
	cout << ((h - 9) * 60) + m;
}