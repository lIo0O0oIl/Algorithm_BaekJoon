// https://www.acmicpc.net/problem/1339

//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <map>
//using namespace std;
//
//struct S
//{
//	char c;
//	int i;
//};
//
//bool com(S right, S left)
//{
//	return right.i > left.i;
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr), cout.tie(nullptr);
//
//	int n, temp = 1;
//	string input, stemp = "";
//	vector<string> inputs;
//	map<char, int> map;
//	vector<S> vec;
//	long long result = 0;
//
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> input;
//		inputs.push_back(input);
//		for (int j = 0; j < input.size(); j++)
//		{
//			for (int k = 0; k < input.size() - 1 - j; k++)
//			{
//				temp *= 10;
//			}
//			map[input[j]] += temp;
//			temp = 1;
//		}
//	}
//
//	for (auto i : map)
//	{
//		vec.push_back({ i.first, i.second });
//	}
//	sort(vec.begin(), vec.end(), com);
//
//	temp = 9;
//	for (int i = 0; i < vec.size(); i++)
//	{
//		vec[i].i = temp;
//		temp--;
//	}
//
//	for (int i = 0; i < vec.size(); i++)
//	{
//		map[vec[i].c] = vec[i].i;
//	}
//
//	for (int i = 0; i < inputs.size(); i++)
//	{
//		for (int j = 0; j < inputs[i].size(); j++)
//		{
//			stemp += map[inputs[i][j]] + '0';
//		}
//		result += stoll(stemp);
//		stemp = "";
//	}
//	cout << result;
//}

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int graph[26];		// 알파벳 개수

bool cmp(int& a, int& b) // 내림차순
{		
	return a > b;
}

int main()
{
	int n;
	string input;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		int pow = 1;
		for (int j = input.size() - 1; j >= 0; j--)
		{
			graph[input[j] - 'A'] += pow;		// 알파벳 자릿수마다 가중치
			pow *= 10;
		}
	}
	sort(graph, graph + 26, cmp);		// 정렬

	int num = 9, answer = 0;
	for (int i = 0; i < 26; i++)
	{
		if (graph[i] == 0) break;
		answer += graph[i] * num;		// 다 더해주기
		num--;
	}
	cout << answer;
}


/*
aaa
aaa
1998

  GCF  = 3
ACDEB  = 5
a = 9
c = 8
g = 7
d = 6
e = 5
b = 4
f = 3
99437

A = 9, B = 4, C = 8, D = 6, E = 5, F = 3, G = 7

A 10000
C 1010
D 100
E 10
G 100
F 1
B 1

자리수가 상관이있음.

GCF

정렬한 뒤 풀기?

스트링에 넣어서 해줬었지



4
ABC
BBD
DGE
PPP
3332
B:9  P:8  D:7  A:6  G:5  C:4  E:3
가중치??

각 자리수에 얼마나 많이 들어가 있는지를 판단.

100
A 1
B 1
D 1
P 1

10
B 2
G 1
P 1

1
C 1
D 1
E 1
P 1

A 100
B 120
C 1
D 101
E 1
G 10
P 111

B P D A G C E

*/