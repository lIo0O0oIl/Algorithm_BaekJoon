// https://www.acmicpc.net/problem/26150

#include <iostream>
#include <algorithm>
#include <vector>
#include <tuple>
using namespace std;

bool Compare(tuple<string, int, int> left,
	tuple<string, int, int> right)
{
	return get<1>(left) < get<1>(right);
}

int main()
{
	int n;
	vector<tuple<string, int, int>> arr;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string name;
		int num, level;
		cin >> name >> num >> level;
		arr.push_back({ name, num, level });
	}

	sort(arr.begin(), arr.end(), Compare);

	/*for (int i = 0; i < n; i++)
	{
		cout << get<0>(arr[i]) << ' ' << get<1>(arr[i]) <<
			' ' << get<2>(arr[i]) << ' ' <<
			get<0>(arr[i])[get<2>(arr[i]) - 1] << '\n';
	}*/

	for (int i = 0; i < n; i++)
	{
		char c = get<0>(arr[i])[get<2>(arr[i]) - 1];
		cout << (char)toupper(c);
	}
}