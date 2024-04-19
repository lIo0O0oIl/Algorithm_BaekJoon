// https://www.acmicpc.net/problem/11650

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Point
{
	int x;
	int y;
};

bool Compare(Point right, Point left)
{
	if (right.x == left.x) return right.y < left.y;
	return right.x < left.x;
}

int main() {
	int n, x, y;
	vector<Point> vec;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		vec.push_back({ x, y });
	}
	sort(vec.begin(), vec.end(), Compare);
	for (int i = 0; i < n; i++)
	{
		cout << vec[i].x << " " << vec[i].y << '\n';
	}
}