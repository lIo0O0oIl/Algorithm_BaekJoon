// https://www.acmicpc.net/problem/31867

#include <iostream>
using namespace std;

int main()
{
	long long n;
	int add = 0, even = 0;		// È¦¼ö, Â¦¼ö
	string k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		int temp = k[i] - '0';
		if (temp == 0) even++;
		else if (temp % 2 == 0) even++;
		else add++;
	}
	if (even > add) cout << 0;
	else if (even < add) cout << 1;
	else cout << -1;
}