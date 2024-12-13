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

	cin >> t;		// 테스트 케이스
	for (int i = 1; i <= t; i++)
	{
		cin >> m;		// 단어 수
		for (int i = 0; i < m; i++)
		{
			cin >> inputS;
			word.push_back(inputS);
		}
		cin >> n;		// 비번 사람 수
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