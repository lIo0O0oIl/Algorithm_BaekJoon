// https://www.acmicpc.net/problem/5220

#include <iostream>
#include <bitset>
using namespace std;

int main()
{
	int t, input, type, even = 0;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> input >> type;
		bitset<16> bit(input);
		for (int i = 0; i < 16; i++)
		{
			if (bit[i] == 1) even++;
		}
		int checkbit = (even % 2 == 0 ? 0 : 1);
		if (checkbit == type) cout << "Valid\n";
		else cout << "Corrupt\n";
		even = 0;
	}
}