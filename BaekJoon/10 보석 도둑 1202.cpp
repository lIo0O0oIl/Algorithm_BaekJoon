// https://www.acmicpc.net/problem/1202

#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

struct Item
{
	long long m, v;		// 무게, 가치
};

bool Compare(Item one, Item two)		// 가치있고 무거운 순으로 정렬
{
	if (one.v != two.v) return one.v > two.v;
	else return one.m > two.m;
}

Item item[300010];		// 보석의 갯수
multiset<long long> bags;
bool use[300010];		// 가방에 보석이 들어가 있는가

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, k;
	double m, v;
	long long input, total = 0;

	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> item[i].m >> item[i].v;
	}
	sort(item, item + n, Compare);

	for (int i = 0; i < k; i++)
	{
		cin >> input;		// 가방의 최대 무게 얻어오기
		bags.insert(input);
	}

	for (int i = 0; i < n;)		// 보석을 돌리면서 
	{
		// // 가방에서 나의 무게를 견디지 못한다면
		if (bags.lower_bound(item[i].m) == bags.end())
		{
			i++;
			continue;
		}

		total += item[i].v;

		bags.erase(bags.lower_bound(item[i].m));		// 하나만 가능하니까
		i++;
	}

	cout << total;
}


/*
입력 :
3 2
1 65
5 23
2 99
10
2

정렬 :
2 99
1 65
5 23

넣어진 것 :
10 - 2 99
2  - 1 65

답 :
164


4 4
2 1
2 2
2 3
2 4
1
1
2
2
= 7


https://www.acmicpc.net/board/view/107919
https://www.acmicpc.net/board/view/95687

*/