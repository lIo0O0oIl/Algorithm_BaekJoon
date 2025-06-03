// https://www.acmicpc.net/problem/2605

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, input;
	vector<int> v;
	cin >> n >> input;
	v.push_back(1);
	for (int i = 2; i <= n; i++)
	{
		cin >> input;
		v.insert(v.begin() + input, i);
	}
	for (int i = v.size() - 1; i >= 0; --i)
	{
		cout << v[i] << ' ';
	}
}