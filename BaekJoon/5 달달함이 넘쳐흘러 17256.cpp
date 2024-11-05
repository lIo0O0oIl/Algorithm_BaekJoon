// https://www.acmicpc.net/problem/17256

#include <iostream>
using namespace std;

int main()
{
	int ax, ay, az;
	int cx, cy, cz;
	cin >> ax >> ay >> az >> cx >> cy >> cz;
	cout << cx - az << ' ' << cy / ay << ' ' << cz - ax;
}