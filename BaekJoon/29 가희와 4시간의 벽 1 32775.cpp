// https://www.acmicpc.net/problem/32775

#include <iostream>
using namespace std;

int main()
{
	int s, f;
	cin >> s >> f;
	cout << (s <= f ? "high speed rail" : "flight");
}