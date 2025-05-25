// https://www.acmicpc.net/problem/9243

#include <iostream>
using namespace std;

int main()
{
	int n;
	string a, b;
	bool is_ok = true;
	cin >> n >> a >> b;
	bool temp = (n % 2);
	for (int i = 0; i < a.size(); i++)
	{
		if (temp)
		{
			if (a[i] == b[i])
			{
				is_ok = false;
				break;
			}
		}
		else
		{
			if (a[i] != b[i])
			{
				is_ok = false;
				break;
			}
		}
	}
	cout << (is_ok ? "Deletion succeeded" : "Deletion failed");
}

// 48 = 0, 49 = 1