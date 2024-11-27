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

	if (index == score.size() - 1)		// ������ ��������̰� ���ӵ� 3���� �ƴϸ� ���信 �־��ְ� ����
	{
		answer.push_back(nowScore + score[index]);
		return;
	}

	stairs(nowScore + score[index], index + 1, count);		// 1, ���ӵ� ������� ���� ���
	if (index + 2 < score.size())
	{
		stairs(nowScore + score[index], index + 2, 0);		// 2. �ٴ��� ������� ���� ���
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

	stairs(0, 0, 0);		// ù��° ����� �P�� ���
	stairs(0, 1, 0);		// �ι�° ����� �P�� ���

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