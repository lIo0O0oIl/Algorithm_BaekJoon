// https://www.acmicpc.net/problem/4072

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a, temp = "";
	while (true)
	{
		getline(cin, a);
		if (a == "#") break;

		for (int i = 0; i < a.size(); i++)
		{
			if (a[i] == ' ')
			{
				for (int j = temp.size() - 1; j >= 0; --j)
				{
					cout << temp[j];
				}
				cout << ' ';
				temp = "";
			}
			else
			{
				temp += a[i];
			}
		}

		for (int j = temp.size() - 1; j >= 0; --j)
		{
			cout << temp[j];
		}
		cout << '\n';
		temp = "";
	}
}