// https://ww.acmicpc.net/problem/5525

#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int n, m;
	string s;
	cin >> n >> m >> s;

	int answer = 0;
	for (int i = 0; i < m; i++)
	{
		int k = 0;
		if (s[i] == 'O') continue;
		else
		{
			while (s[i + 1] == 'O' && s[i + 2] == 'I')
			{
				k++;
				if (k == n)
				{
					k--;		// 중복 카운트 막기
					answer++;
				}
				i += 2;
			}
		}
	}
	cout << answer;
}