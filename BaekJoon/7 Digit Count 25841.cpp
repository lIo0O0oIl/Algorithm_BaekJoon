// https://www.acmicpc.net/problem/25841

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, m, count = 0;
	char input;
	cin >> n >> m >> input;
	for (int i = n; i <= m; i++)
	{
		string now = to_string(i);
		for (int j = 0; j < now.size(); j++)
		{
			if (now[j] == input) count++;
		}
	}
	cout << count;
}