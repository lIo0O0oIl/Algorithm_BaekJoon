// https://www.acmicpc.net/problem/16171

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s, k;
	int nowIndex = 0;
	cin >> s >> k;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= '0' && s[i] <= '9') continue;

		if (s[i] == k[nowIndex]) nowIndex++;
		else
		{
			i -= nowIndex;
			nowIndex = 0;
		}

		if (nowIndex == k.size())
		{
			cout << 1;
			return 0;
		}
	}
	cout << 0;
}


/*
1q2w3e4r5t6y
qwerty
1

1ovey0uS2
veS
0

abac
ac
1

aabcd
abcd
1
*/