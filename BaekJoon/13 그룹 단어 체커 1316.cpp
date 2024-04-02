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
		v.push_back(input[0]);			// ó�� �� �־��ֱ�
		for (int j = 1; j < input.size(); j++)
		{
			if (!v.empty() && v.back() == input[j])		/// ���� ���� ���� ���� ���̶��
			{
				v.push_back(input[j]);
			}
			else if (find(v.begin(), v.end(), input[j]) != v.end())		// ���� �迭���� ���� ���� ���� ã�����ٸ�
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