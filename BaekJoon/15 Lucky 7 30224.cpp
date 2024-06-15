// https://www.acmicpc.net/problem/30224

#include <iostream>
#include <string>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	string temp = to_string(n);
	for (int i = 0; i < temp.size(); i++)
	{
		if (temp[i] == '7' && n % 7 != 0)
		{
			cout << 2;
			return 0;
		}
		else if (temp[i] == '7' && n % 7 == 0)
		{
			cout << 3;
			return 0;
		}
	}
	if (n % 7 != 0) cout << 0;
	else if (n % 7 == 0) cout << 1;
}