// https://www.acmicpc.net/problem/11651

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Pos
{
	int x;
	int y;
};

bool com(Pos left, Pos right)
{
	if (left.y != right.y) return left.y < right.y;
	else left.x < right.x;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int n, x, y;
	vector<Pos> vec;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		vec.push_back({ x, y });
	}

	sort(vec.begin(), vec.end(), com);

	for (auto i : vec)
	{
		cout << i.x << " " << i.y << '\n';
	}
}