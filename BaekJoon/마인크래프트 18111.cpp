// https://www.acmicpc.net/problem/18111

//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr), cout.tie(nullptr);
//
//	int n, m;
//	long long b;		// ������ �ִ� �� ��
//	int land[501][501];
//
//	float avg = 0;		// ��հ�
//	int time = 0;
//	int bb = 0;		// ���� �� �ִ� �� ��
//	int need = 0;		// �ʿ��� �� ��
//
//	cin >> n >> m >> b;
//	
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> land[i][j];
//			avg += land[i][j];
//		}
//	}
//	
//	avg /= n * m;
//	
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (land[i][j] != avg)		// ���ٰ� ����� �ƴϸ�
//			{
//				if (land[i][j] > avg)		// ��պ��� ũ��
//				{
//					time = 2 * (land[i][j] - avg);
//					bb += land[i][j] - avg;		// �� �� �ִ� �� �߰�
//				}
//				else		// ��պ��� ������
//				{
//					need += avg - land[i][j];		// �ʿ��� ���� �����ֱ�
//				}
//			}
//		}
//	}
//
//	if (need != 0)		// �ʿ��� ���� �ִٸ�
//	{
//		if (need < b)		// ������ �ִ� ���� �� ũ��
//		{
//			time += need;
//		}
//		else if (need < b + bb)
//		{
//			time += bb * 2;
//			time += need;
//		}
//	}
//
//	cout << time << " " << round(avg);
//}


	//for (int i = 0; i < n; i++)
	//{
	//	for (int j = 0; j < m; j++)
	//	{
	//		cout << land[i][j] << " ";
	//	}
	//	cout << '\n';
	//}



#include <iostream>
using namespace std;

int main()
{
	int n, m;
	long long b;
	int land[501][501];
	int avg = 0;		// ��հ�
	int time = 0;

	int bb, need;
	bb = need = 0;

	cin >> n >> m >> b;
	avg += b;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> land[i][j];
			avg += land[i][j];
		}
	}

	avg = round(avg / (n * m));		// ��հ� ���ϱ�

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (land[i][j] != avg)		// ���ٰ� ����� �ƴϸ�
			{
				if (land[i][j] > avg)		// ��պ��� ũ��
				{
					time = 2 * (land[i][j] - avg);		// �ð� �����ְ�
					bb += land[i][j] - avg;		// �� �� �ִ� �� �߰�
				}
				else		// ��պ��� ������
				{
					need += avg - land[i][j];		// �ʿ��� ���� �����ֱ�
				}
			}
		}
	}

	if (need != 0)		// �ʿ��� ���� �ִٸ�
	{
		if (need < b)		// ������ �ִ� ���� �� ũ��
		{
			time += need;
		}
		else if (need < b + bb)
		{
			time += bb * 2;
			time += need;
		}
	}

	cout << time << " " << round(avg);
}


/*
1. �迭�� �Է� �޴´�.
2. ����� ���Ѵ�. ���ؼ� ���� int �� �ؼ� ���� ����� ������ �Ѵ�.??
3. �ð��� �ִ�?


���� �ִ� ������ �ؼ� ����� ���غ���?
*/