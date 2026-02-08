// https://www.acmicpc.net/problem/1380

#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;

int main()
{
	int n, t = 1;
	string input;
	cin >> n;
	cin.ignore();
	while (true)
	{
		if (n == 0) break;
		vector<string> v(n);
		set<int> s;
		for (int i = 0; i < n; i++)
		{
			getline(cin, v[i]);
		}
		while (true)		// 이럴 필요 없었음.
		{
			getline(cin, input);
			if (input[input.size() - 1] == 'A' ||
				input[input.size() - 1] == 'B')
			{
				string temp = input.substr(0, input.size() - 2);
				int value = stoi(temp);
				if (s.find(value) != s.end()) s.erase(value);
				else s.insert(value);
			}
			else
			{
				n = stoi(input);
				break;
			}
		}
		for (auto i : s)
		{
			cout << t << ' ' << v[i - 1] << '\n';
		}
		t++;
	}
}


/*
엥 입력 조건 잘못봐서 어렵게 풀었다.
2n − 1 줄이였는데 이거 안 보고 판단해서 풀었네
*/