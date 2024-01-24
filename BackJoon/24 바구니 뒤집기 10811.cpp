// https://www.acmicpc.net/problem/10811

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	vector<int> v;
	int n, m, input1, input2;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		v.push_back(i);
	}
	for (int i = 0; i < m; i++)
	{
		cin >> input1 >> input2;
		reverse(v.begin() + (input1 - 1), v.begin() + input2);
	}
	for (int i : v) cout << i << " ";
}

/*
1 2 3 4 5

2 1 3 4 5
2 1 4 3 5
3 4 1 2 5
3 4 1 2 5

*/