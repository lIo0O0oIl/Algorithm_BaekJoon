// https://www.acmicpc.net/problem/1966

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

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
			cout << input;
			sortVec.push_back(input);
			print.push(input);
			if (j + 1 == m) my = input;		// �� ������ �߿䵵 ��������
		}

		sort(sortVec.begin(), sortVec.end());
		for (int j = 0; j < sortVec.size(); j++)
		{
			sortPrint.push(sortVec[j]);
		}

		while (!print.empty())		// �����Ͱ� �� ������
		{
			if (print.front() == sortPrint.front())		// �տ����� ���ĵ� ť�� ����?
			{
				//if (print.front() == )
			}
		}
	}
}

// �߿䵵�� �ߺ��� ���� ó���� �����ؾ���.