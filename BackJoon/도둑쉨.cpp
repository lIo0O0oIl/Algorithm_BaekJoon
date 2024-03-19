#include <iostream>
#include <algorithm>
using namespace std;

struct Item
{
	double m, v;		// 무게, 가격
};

bool Compare(Item one, Item two)		// 비싸고 무거운 순으로 정렬
{
	if (one.v != two.v)			// 
	{

	}
	return one.v / one.m > two.v / two.m;
}

Item item[300010];		// 보석의 갯수
long long bag[300010];		// 가방의 무게
bool use[300010];		// 보석이 사용이 되었는가

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, k;
	long long c, total = 0;

	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >>	item[i].m >> item[i].v;
	}
	for (int i = 0; i < k; i++)
	{
		cin >> bag[i];
	}
	sort(item, item + n, Compare);		// 이거 좀 바꾸기?
	sort(bag, bag + k);

	for (int i = 0; i < n; i++)		// 보석의 수만큼
	{
		auto ref = lower_bound(bag, bag + k, item[i].m);
	}
	cout << total;
}


/*
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


입력 :
3 2
1 65
5 23
2 99
10
2

정렬 :
1 65
2 99
5 23

넣어진 것 :
10 - 1 65
2  - 2 99

답 :
164



https://www.acmicpc.net/board/view/107919


*/