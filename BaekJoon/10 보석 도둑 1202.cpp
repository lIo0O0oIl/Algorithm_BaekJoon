// https://www.acmicpc.net/problem/1202

#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

struct Item
{
	long long m, v;		// ����, ��ġ
};

bool Compare(Item one, Item two)		// ��ġ�ְ� ���ſ� ������ ����
{
	if (one.v != two.v) return one.v > two.v;
	else return one.m > two.m;
}

Item item[300010];		// ������ ����
multiset<long long> bags;
bool use[300010];		// ���濡 ������ �� �ִ°�

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
		cin >> input;		// ������ �ִ� ���� ������
		bags.insert(input);
	}

	for (int i = 0; i < n;)		// ������ �����鼭 
	{
		// // ���濡�� ���� ���Ը� �ߵ��� ���Ѵٸ�
		if (bags.lower_bound(item[i].m) == bags.end())
		{
			i++;
			continue;
		}

		total += item[i].v;

		bags.erase(bags.lower_bound(item[i].m));		// �ϳ��� �����ϴϱ�
		i++;
	}

	cout << total;
}


/*
�Է� :
3 2
1 65
5 23
2 99
10
2

���� :
2 99
1 65
5 23

�־��� �� :
10 - 2 99
2  - 1 65

�� :
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