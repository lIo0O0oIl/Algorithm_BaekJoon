// https://www.acmicpc.net/problem/7513

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t, m, n, k;
	vector<string> word;
	string inputS, number;
	int inputI;

	cin >> t;		// �׽�Ʈ ���̽�
	for (int i = 1; i <= t; i++)
	{
		cin >> m;		// �ܾ� ��
		for (int i = 0; i < m; i++)
		{
			cin >> inputS;
			word.push_back(inputS);
		}
		cin >> n;		// ��� ��� ��
		cout << "Scenario #" << i << ":\n";
		while (n--)
		{
			cin >> k;
			while (k--)
			{
				cin >> inputI;
				number += word[inputI];
			}
			cout << number << '\n';
			number = "";
		}
		cout << '\n';
		word.clear();
	}
}