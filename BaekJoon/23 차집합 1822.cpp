// https://www.acmicpc.net/problem/1822

#include <iostream>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int a, b, input;
	set<int> set;
	cin >> a >> b;
	for (int i = 0; i < a; i++)
	{
		cin >> input;
		set.insert(input);
	}
	for (int i = 0; i < b; i++)
	{
		cin >> input;
		if (set.find(input) != set.end())
		{
			set.erase(input);
		}
	}
	cout << set.size() << '\n';
	for (auto i : set)
	{
		cout << i << " ";
	}
}