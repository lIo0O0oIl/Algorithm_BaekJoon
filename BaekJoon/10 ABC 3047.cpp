// https://www.acmicpc.net/problem/3047

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int temp;
	char one, two, three;
	vector<int> v;
	for (int i = 0; i < 3; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());
	cin >> one >> two >> three;
	cout << v[one - 65] << ' ' << v[two - 65] << ' ' << v[three - 65];
}