// https://www.acmicpc.net/problem/11652

#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	map<long long, int> card;		// 숫자, 개수
	int n;
	long long input, num = 0, answer;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		card[input]++;
	}
	for (auto i : card)
	{
		if (i.second > num)
		{
			num = i.second;
			answer = i.first;
		}
	}
	cout << answer;
}