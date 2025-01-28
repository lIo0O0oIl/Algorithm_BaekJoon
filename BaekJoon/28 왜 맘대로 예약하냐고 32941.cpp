// https://www.acmicpc.net/problem/32941

#include <iostream>
using namespace std;

int main()
{
	int temp, temp2, x, n;
	bool is_ok = false, answer = true;
	cin >> temp >> x >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		for (int j = 0; j < temp; j++)
		{
			cin >> temp2;
			if (temp2 == x) is_ok = true;
		}
		if (is_ok == false) answer = false;
	}
	cout << (answer == true ? "YES" : "NO");
}