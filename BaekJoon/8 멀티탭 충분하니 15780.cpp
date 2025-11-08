// https://www.acmicpc.net/problem/15780

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, k, count = 0;
	float input;
	cin >> n >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> input;
		count += ceil(input / 2);
	}
	cout << (count >= n ? "YES" : "NO");
}