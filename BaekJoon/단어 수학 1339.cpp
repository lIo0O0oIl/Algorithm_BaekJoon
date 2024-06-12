// https://www.acmicpc.net/problem/1339

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

bool com(string a, string b)
{
	return a > b;
}

int main()
{
	int n, now = 9, nowIndex = 8;
	vector<string> vec;
	unordered_map<char, int> map = { {'0', 0} };
	string input, temp = "000000000";
	long long result = 0;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		for (int i = input.size() - 1; i >= 0; --i)
		{
			temp[nowIndex] = input[i];
			nowIndex--;
		}
		vec.push_back(temp);
		temp = "000000000";
		nowIndex = 8;
	}
	sort(vec.begin(), vec.end(), com);

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (map.find(vec[j][i]) == map.end())       // 이게 지금 들어있지 않으면
			{
				map.insert({ vec[j][i], now });
				now--;
			}
		}
	}

	//for (auto i : map)
	//{
	//	cout << i.first << " " << i.second << endl;
	//}

	for (int i = 0; i < n; i++)
		{
			for (int j = 8; j >= 0; --j)
			{
				temp[nowIndex] = map[vec[i][j]] + '0';
				nowIndex--;
			}
			result += stoll(temp);
			temp = "000000000";
			nowIndex = 8;
		}
	cout << result;
}


/*
aaa
aaa
1998


ACDEB       = 5
    GCF  = 3
a = 9
c = 8
g = 7
d = 6
e = 5
b = 4
f = 3
99437

자리수가 상관이있음.

GCF

정렬한 뒤 풀기?

스트링에 넣어서 해줬었지
*/