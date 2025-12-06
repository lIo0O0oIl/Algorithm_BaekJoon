// https://www.acmicpc.net/problem/11179

#include <iostream>
#include <bitset>
using namespace std;

int main()
{
	long long n;
	string reverse = "";
	cin >> n;

	while (n != 0)
	{
		if (n % 2 == 1) reverse += "1";
		else reverse += "0";
		n /= 2;
	}
	bitset<32> bits(reverse);
	cout << bits.to_ullong();
}