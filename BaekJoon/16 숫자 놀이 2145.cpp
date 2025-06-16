// https://www.acmicpc.net/problem/2145

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string n;
	while (true)
	{
		cin >> n;
		if (n == "0") break;
		while (true)
		{
			int answer = 0;
			for (int i = 0; i < n.size(); i++)
			{
				answer += n[i] - 48;
			}
			n = to_string(answer);
			if (n.size() == 1) break;
		}
		cout << n << '\n';
	}
}