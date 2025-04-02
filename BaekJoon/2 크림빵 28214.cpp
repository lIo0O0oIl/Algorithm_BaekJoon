// https://www.acmicpc.net/problem/28214

#include <iostream>
using namespace std;

int main()
{
	int n, k, p;		// n ¹­À½, k ÇÑ ¹­À½ÀÇ °³¼ö, Å©¸²¾ø»§ p°³
	int temp, count = 0, answer = 0;
	cin >> n >> k >> p;
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> temp;
			if (temp == 0) count++;
		}
		if (count < p) answer++;
		count = 0;
	}
	cout << answer;
}