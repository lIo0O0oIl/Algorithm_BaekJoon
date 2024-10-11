// https://www.acmicpc.net/problem/28444

#include <iostream>
using namespace std;

int main()
{
	int h, i, a, r, c;
	cin >> h >> i >> a >> r >> c;
	cout << (h * i) - (a * r * c);
}