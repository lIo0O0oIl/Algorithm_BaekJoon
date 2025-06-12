// https://www.acmicpc.net/problem/1350

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	long long n, c, file, count = 0;
	vector<long long> v;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> file;
		v.push_back(file);
	}
	cin >> c;
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] == 0) continue;
		count += v[i] / c;
		if (v[i] % c != 0) count++;
	}
	cout << count * c;
}