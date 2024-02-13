// https://www.acmicpc.net/problem/1316

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n, cnt = 0;
	string input;
	vector<char> v;
	bool check = true;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		v.push_back(input[0]);			// 처음 것 넣어주기
		for (int j = 1; j < input.size(); j++)
		{
			if (!v.empty() && v.back() == input[j])		/// 만약 전에 꺼랑 같은 것이라면
			{
				v.push_back(input[j]);
			}
			else if (find(v.begin(), v.end(), input[j]) != v.end())		// 만약 배열에서 내가 넣을 것이 찾아진다면
			{
				check = false;
				break;
			}
			else
			{
				v.push_back(input[j]);
			}
		}
		if (check)
		{
			cnt++;
		}
		v.clear();
		check = true;
	}
	cout << cnt;
}