// https://www.acmicpc.net/problem/1202

#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

bool Compare(tuple<long long, long long, double, bool> one, tuple<long long, long long, double, bool> two)
{
	return get<2>(one) > get<2>(two);
}

struct Item
{
	long long m, v;
};

bool Compare2(Item one, Item two)
{
	return one.v / one.m > two.v / two.m;
}

Item item[300010];		// 보석의 갯수
bool use[300010];		// 보석이 사용이 되었는가

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, k;
	double m, v;
	long long c, total = 0;
	//vector<tuple<long long, long long, float, bool>> vec;

	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> m >> v;
		//vec.push_back(make_tuple(m, v, v / m, true));
		item[i].m = m;
		item[i].v = v;
	}
	//sort(vec.begin(), vec.end(), Compare);		// 무게에 비래해서 가치가 큰 것을 넣어줌
	sort(item, item + n, Compare2);

	for (int i = 0; i < k; i++)
	{
		cin >> c;		// 가방의 최대 무게 얻어오기

		//for (int i = 0; i < vec.size(); i++)		// 보석 개수만큼
		for (int i = 0; i < n; i++)		// 보석 개수만큼
		{
			//if (c >= get<0>(vec[i]) && get<3>(vec[i]) != false)		// 무게가 가방의 최대 무게보다 적으면
			//{
			//	total += get<1>(vec[i]);
			//	get<3>(vec[i]) = false;
			//	break;
			//}
			if (use[i] == false)
			{
				if (c >= item[i].m)		// 무게가 가방 용량보다 적으면
				{
					total += item[i].v;
					use[i] = true;
					break;
				}
			}
		}
	}
	cout << total;
}