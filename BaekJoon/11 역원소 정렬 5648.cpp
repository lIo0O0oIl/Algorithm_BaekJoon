// https://www.acmicpc.net/problem/5648

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	string input;
	cin >> n;
	vector<long long> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		reverse(input.begin(), input.end());
		v[i] = (stoll(input));
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++)
	{
		cout << v[i] << '\n';
	}
}