// https://www.acmicpc.net/problem/1181

#include <iostream>
#include <vector>
#include <unordered_set>		// 중복방지
#include <algorithm>
using namespace std;

bool comp(string a, string b)
{
	if (a.size() != b.size())
	{
		return a.size() < b.size();
	}
	return a < b;
}

int main() {
	int n;
	string input;
	vector<string> arr;
	unordered_set<string> set;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (set.find(input) == set.end())		// 찾아지지 않으면
		{
			set.insert(input);
			arr.push_back(input);
		}
	}
	sort(arr.begin(), arr.end(), comp);
	for (auto i : arr)
	{
		cout << i << '\n';
	}
}