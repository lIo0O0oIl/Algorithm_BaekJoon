// https://www.acmicpc.net/problem/2579

#include <iostream>
#include <vector>
using namespace std;

vector<long long> answer;
vector<int> score;

void stairs(long long nowScore, int index, int count)
{
	count++;
	if (count >= 3) return;

	if (index == score.size() - 1)		// 마지막 도착계단이고 연속된 3개가 아니면 정답에 넣어주고 리턴
	{
		answer.push_back(nowScore + score[index]);
		return;
	}

	stairs(nowScore + score[index], index + 1, count);		// 1, 연속된 계단으로 가는 경우
	if (index + 2 < score.size())
	{
		stairs(nowScore + score[index], index + 2, 0);		// 2. 다다음 계단으로 가는 경우
	}
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		score.push_back(temp);
	}

	stairs(0, 0, 0);		// 첫번째 계단을 밣는 경우
	stairs(0, 1, 0);		// 두번째 계단을 밣는 경우

	int maxTemp = 0;
	for (int i = 0; i < answer.size(); i++)
	{
		if (answer[i] > maxTemp)
		{
			maxTemp = answer[i];
		}
	}
	cout << maxTemp;
}