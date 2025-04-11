// https://www.acmicpc.net/problem/5692

#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	string n;
	int f = 1, answer = 0;
	while (true)
	{
		cin >> n;
		if (n == "0") break;
		for (int i = 0; i < n.size(); i++)
		{
			for (int j = 0; j < n.size() - i; j++)
			{
				f += f * j;
			}
			answer += f * (n[i] - '0');
		}
		cout << answer << '\n';
		answer = 0;
		f = 1;
	}
}