// https://www.acmicpc.net/problem/23971

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float h, w, n, m;
	cin >> h >> w >> n >> m;
	cout << (int)ceil(h / (n + 1)) * (int)ceil(w / (m + 1));
}