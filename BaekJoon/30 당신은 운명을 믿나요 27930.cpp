// https://www.acmicpc.net/problem/27930

#include <iostream>
using namespace std;

int main()
{
	int ik = 0, iy = 0;
	string input;
	string k = "KOREA", y = "YONSEI";

	cin >> input;
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] == k[ik])
		{
			ik++;
			if (ik == 5)
			{
				cout << k;
				return 0;
			}
		}

		if (input[i] == y[iy])
		{
			iy++;
			if (iy == 6)
			{
				cout << y;
				return 0;
			}
		}
	}
}