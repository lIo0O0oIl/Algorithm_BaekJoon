// https://www.acmicpc.net/problem/2609

#include <iostream>
using namespace std;

int main() {
	int n, m, common = 1;
	cin >> n >> m;
	int big = n > m ? n : m;
	for (int i = big; i >= 2; --i)
	{
		if (n % i == 0 && m % i == 0)
		{
			common = i;
			break;
		}
	}
	cout << common << '\n' << n * m / common;
}