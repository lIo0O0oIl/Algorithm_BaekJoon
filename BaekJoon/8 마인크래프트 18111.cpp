// https://www.acmicpc.net/problem/18111

#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	float n, m;
	int land[501][501];
	long long originBlock, myBlock;

	int need, second;

	int minSecond = 100000001, maxHeight;

	cin >> n >> m >> originBlock;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> land[i][j];
		}
	}

	for (int i = 0; i < 257; i++)
	{
		myBlock = originBlock;
		need = second = 0;

		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < m; k++)
			{
				if (land[j][k] > i)		// 지금 땅보다 크면 캐주기
				{
					myBlock += land[j][k] - i;
					second += 2 * (land[j][k] - i);
				}
				else if (land[j][k] < i)		// 지금 땅보다 작으면 필요한 블럭 ++
				{
					need += i - land[j][k];
				}
			}
		}

		if (need > myBlock)		// 내가 가진 것이 필요한 블럭보다 많으면 이번땅은 불가능
		{
			continue;
		}
		else
		{
			second += need;
		}

		if (second <= minSecond)
		{
			minSecond = second;
			maxHeight = i;
		}
	}
	cout << minSecond << " " << maxHeight;
}


/*
땅의 높이는 0에서 256임
음. 그럼 아예 이걸 반복문 돌리면 좋지 않나? 아 좋은데?
일단 최대가 가지고 있는 블럭이 겁나 많을 수도 있겠구나

최소 시간인게 좋은데
최소 시간인것이 여러개이면 땅의 높이가 가장 높은 것을 출력.

마지막 반례는 
22 63 이여야함.

*/