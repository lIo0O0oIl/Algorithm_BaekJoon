// https://www.acmicpc.net/problem/28135

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, count = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		count++;
		if (i == n) break;
		if (to_string(i).find("50") != string::npos) count++;
	}
	cout << count;
}