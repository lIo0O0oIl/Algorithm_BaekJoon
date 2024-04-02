// https://www.acmicpc.net/problem/2798

#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int n, m, input, answer = 0;
	vector<int> vec;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		vec.push_back(input);
	}
	for (int i = 0; i < vec.size(); i++)
	{
		for (int j = 0; j < vec.size(); j++)
		{
			if (i == j) continue;
			for (int k = 0; k < vec.size(); k++)
			{
				if (i == k) continue;
				if (j == k) continue;
				if (vec[i] + vec[j] + vec[k] <= m && vec[i] + vec[j] + vec[k] > answer)
				{
					answer = vec[i] + vec[j] + vec[k];
				}
			}
		}
	}
	cout << answer;
}