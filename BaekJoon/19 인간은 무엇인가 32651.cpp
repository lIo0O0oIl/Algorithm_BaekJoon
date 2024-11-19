// https://www.acmicpc.net/problem/32651

#include <iostream>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	if (n > 100000)
	{
		cout << "No";
		return 0;
	}
	cout << (n % 2024 == 0 ? "Yes" : "No");
}