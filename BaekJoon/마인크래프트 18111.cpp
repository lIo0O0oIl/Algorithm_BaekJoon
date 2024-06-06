// https://www.acmicpc.net/problem/18111

#include <iostream>
using namespace std;

int avg;
int n, m;
int land[501][501];
long long myBlock;
int need;
int second;

void Bulldoze()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (land[i][j] > avg)		// ��պ��� ũ�� �� ĳ�ֱ�
			{
				myBlock += land[i][j] - avg;
				land[i][j] -= land[i][j] - avg;
				second += 2 * (land[i][j] - avg);		// ??? �� �� ������ �ȉ�
			}
			else if (land[i][j] < avg)			// ��պ��� ������ �ʿ��� �� ���� �ø���
			{
				need += avg - land[i][j];
			}
		}
	}
	if (need > myBlock)		// �ʿ��� ���� �� ������
	{
		avg--;
		Bulldoze();
	}
	else
	{
		second += need;
	}

	cout << second << " " << avg;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	cin >> n >> m >> myBlock;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> land[i][j];
			avg += land[i][j];
		}
	}

	avg /= n * m;

	Bulldoze();
}


/*
�ϴ� ����� ���Ѵ�����
���� Ž���ϴµ� ��պ��� ū�� ������ �߶��ְ�
���� ���� �߰�����. �׸��� �ð� 2�� ������.
��պ��� ���� ���� ������ �ʿ��� �� ������ ���� ������.
�� �� ������ �ʿ��� �� ������ ���� �ִ� ������ ������
��հ��� ���� �Ŀ� �ٽ� ���� Ž������.
�ݴ�� ������ ���� ��ġ����. 1�ʰ� �ɸ�.

ù��° �ݷʸ� ����ϸ�
��� ; 0
������ ĳ�ְ� 2�� �߰�
���� 2 0

�ι�° �ݷʸ� ����ϸ�
��� : 64
������ �����ְ� 

����Լ��� �ݺ��� �ϸ� �� �� ������
*/