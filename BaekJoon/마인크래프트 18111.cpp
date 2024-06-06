// https://www.acmicpc.net/problem/18111

#include <iostream>
using namespace std;

int avg;
int n, m;
int land[501][501];
long long myBlock;
int need;
int second;

void Bulldoze()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (land[i][j] > avg)		// 평균보다 크면 블럭 캐주기
			{
				myBlock += land[i][j] - avg;
				land[i][j] -= land[i][j] - avg;
				second += 2 * (land[i][j] - avg);		// ??? 얘 값 적용이 안됌
			}
			else if (land[i][j] < avg)			// 평균보다 작으면 필요한 블럭 개수 올리기
			{
				need += avg - land[i][j];
			}
		}
	}
	if (need > myBlock)		// 필요한 블럭이 더 많으면
	{
		avg--;
		Bulldoze();
	}
	else
	{
		second += need;
	}

	cout << second << " " << avg;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	cin >> n >> m >> myBlock;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> land[i][j];
			avg += land[i][j];
		}
	}

	avg /= n * m;

	Bulldoze();
}


/*
일단 평균을 구한다음에
땅을 탐색하는데 평균보다 큰게 있으면 잘라주고
지금 블럭을 추가해줌. 그리고 시간 2초 더해줌.
평균보다 작은 것이 있으면 필요한 블럭 변수에 값을 더해줌.
다 돈 다음에 필요한 블럭 변수가 지금 있는 블럭보다 많으면
평균값을 낮춘 후에 다시 땅을 탐색해줌.
반대로 적으면 블럭을 설치해줌. 1초가 걸림.

첫번째 반례를 사용하면
평균 ; 0
마지막 캐주고 2초 추가
답은 2 0

두번째 반례를 사용하면
평균 : 64
마지막 더해주고 

재귀함수로 반복을 하면 될 거 같은데
*/