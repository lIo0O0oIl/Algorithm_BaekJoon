// https://www.acmicpc.net/problem/2935

#include <iostream>
using namespace std;

int main()
{
    string a, b, total = "";
    char math;
    cin >> a >> math >> b;
	switch (math)
	{
	case '*':
		for (int i = 0; i < a.size() -1; i++)
		{
			total += '0';
		}
		for (int i = 0; i < b.size(); i++)
		{
			total += '0';
		}
		total[0] = '1';
		break;
	case '+':
		if (a.size() > b.size())
		{
			total = a;
			for (int i = 0; i < b.size(); i++)
			{
				total[total.size() - i - 1] = b[b.size() - i - 1];
			}
		}
		else if (a.size() < b.size())
		{
			total = b;
			for (int i = 0; i < a.size(); i++)
			{
				total[total.size() - i - 1] = a[a.size() - i - 1];
			}
		}
		else
		{
			total = a;
			total[0] = '2';
		}
		break;
	}
	cout << total;
}