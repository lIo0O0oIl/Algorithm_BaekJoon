// https://www.acmicpc.net/problem/28431

#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	unordered_set<int> s;
	int input;
	for (int i = 0; i < 5; i++)
	{
		cin >> input;
		if (s.find(input) == s.end())		// 없으면
		{
			s.insert(input);
		}
		else
		{
			s.erase(input);		// 있으면 지워주기
		}
	}
	for (int i : s)
	{
		cout << i;
	}
}