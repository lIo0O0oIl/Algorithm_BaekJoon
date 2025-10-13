// https://www.acmicpc.net/problem/11874

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int l, d, x, small, big, sum = 0;
	string temp;
	cin >> l >> d >> x;
	small = d;
	big = l;
	for (int i = l; i <= d; i++)
	{
		temp = to_string(i);
		for (int j = 0; j < temp.size(); j++)
		{
			if (temp[j] == '0') continue;
			sum += temp[j] - '0';
		}
		if (sum == x)
		{
			if (i < small) small = i;
			if (i > big) big = i;
		}
		sum = 0;
	}
	cout << small << '\n' << big;
}