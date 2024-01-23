// https://www.acmicpc.net/problem/24511

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, input, m, now = 0;
	int queuestack[100001] = { 0 };
	vector<int> v;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		v.push_back(input);
	}
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		queuestack[i] = input;
	}

	cin >> m;

	for (int j = 0; j < n; j++)
	{
		cout << queuestack[j] << " ";
	}		// ����׿�

	for (int i = 0; i < m; i++)
	{
		cin >> input;
		for (int j = 0; j < n; j++)
		{
			if (v[j] == 0) {		// ť���
				now = queuestack[j];		// ������ �ִ� �� pop
				if (queuestack[j + 1] == 1)
				{
					queuestack[j + 1] = queuestack[j];
				}
				queuestack[j] = input;		// ���� ���� �Է� ���� ��
			}
			else {
				if (queuestack[j + 1] == 1)
				{
					queuestack[j + 1] = queuestack[j];
				}
				now = queuestack[j];	// �� �ڽ� �ٷ� �־��ֱ�
			}
		}

		cout << endl << now << endl;		// �����ֱ�
		for (int j = 0; j < n; j++)
		{
			cout << queuestack[j] << " ";
		}		// ����׿�
	}
}


/*
* 
1		ť
2		����
3		����			��������
4		ť				���Լ���
				1 2 3 4

2	����
1 2		2 �ְ� 1 ����
2 1		1 �ְ� 1 ����
3 1		1 �ְ� 1 ����
4 1		1 �ְ� 4 ����
= 4			2 2 3 1

4	����
2 4		4 �ְ� 2 ����
2 2		2 �ְ� 2 ����
3 2		2 �ְ� 2 ����
1 2		2 �ְ� 1 ����
= 1			4 2 3 2

7 ����
4 7		7 �ְ� 4 ����
2 2		2 �ְ� 4 ����
3 2		2 �ְ� 4 ����
2 4		4 �ְ� 2����
= 2			7 2 3 4

= 4 1 2
*/