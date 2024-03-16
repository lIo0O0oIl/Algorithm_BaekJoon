#include <iostream>
#include <algorithm>
using namespace std;

struct Item
{
	double m, v;
};

bool Compare(Item one, Item two)
{
	return one.v / one.m > two.v / two.m;
}

Item item[300010];		// ������ ����
long long bag[300010];		// ������ ����
bool use[300010];		// ������ ����� �Ǿ��°�

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
	sort(item, item + n, Compare);		// �̰� �� �ٲٱ�?
	sort(bag, bag + k);

	for (int i = 0; i < k; i++)
	{
		cin >> c;		// ������ �ִ� ���� ������
		//for (int i = 0; i < n; i++)		// ���� ������ŭ
		//{
		//	if (use[i] == false)
		//	{
		//		if (c >= item[i].m)		// ���԰� ���� �뷮���� ������
		//		{
		//			total += item[i].v;
		//			use[i] = true;
		//			break;
		//		}
		//	}
		//}
		//auto ref = lower_bound(item[i].m);
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

https://www.acmicpc.net/board/view/107919


*/