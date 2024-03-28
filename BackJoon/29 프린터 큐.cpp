// https://www.acmicpc.net/problem/1966

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

bool com(int a, int b)
{
	return a > b;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int t, n, m, input;		// �׽�Ʈ ���̽�, ������ ����, ã�� ���� �ε���, ���� �Է� �ޱ� ����
	int my, answer = 0;			// �� ������ �߿䵵, ��� ����
	queue<int> print, sortPrint;
	vector<int> sortVec;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> n >> m;
		for (int j = 0; j < n; j++)
		{
			cin >> input;
			sortVec.push_back(input);
			print.push(input);
			if (j == m)
			{
				my = input;		// �� ������ �߿䵵 ��������
			}
		}

		sort(sortVec.begin(), sortVec.end(), com);
		for (int j = 0; j < sortVec.size(); j++)
		{
			sortPrint.push(sortVec[j]);
		}

		while (!print.empty())		// �����Ͱ� �� ������
		{
			if (print.front() == sortPrint.front())		// �տ����� ���ĵ� ť�� ����?
			{
				m--;
				answer++;
				if (print.front() == my && m == -1) break;
				if (m == -1) m = print.size() - 1;
				print.pop();
				sortPrint.pop();		// ���� �� ���ֱ�
			}
			else
			{
				print.push(print.front());
				print.pop();
				m--;
				if (m == -1) m = print.size() - 1;
			}

			//for (int j = 0; j < print.size(); j++)
			//{
			//	cout << print.front() << " ";
			//	print.push(print.front());
			//	print.pop();
			//}
			//cout << endl;
		}

		cout << answer << '\n';

		answer = 0;
		while (!print.empty())
		{
			print.pop();
		}
		while (!sortPrint.empty())
		{
			sortPrint.pop();
		}
		sortVec.clear();
	}
}

// �߿䵵�� �ߺ��� ���� ó���� �����ؾ���.

/*
�ϴ� ������ �Ǿ����� ��


4 2
1 2 3 4
= 2 (3��° ������ �� ��°�� ����� �Ǵ°�)
�� ��Ȳ���� ���ͷ� ������ �ϸ� �� ť������
4 3 2 1(�߿䵵)
1 2 3 4(���� ��ȣ)
= now 
�տ����� ���� ���� �����⸦ �ϴٰ� now �� -0�� �Ǹ�

���ſ� ���� ������ �ʿ���

1 2 3 4		ã������ ������ �߿䵵�� 3, ��ġ�� 2
2 3 4 1		��ġ 1
3 4 1 2		��ġ 0
4 1 2 3		��ġ -1�̿��� print.size() - 1; �־���. ��ġ 3
1 2 3			4���ְ� ��ġ 2
2 3 1			��ġ 1
3 1 2			��ġ 0
1 2			3 ���µ� ������ �߿䵵�� ����. ��ġ�� -1;

*/