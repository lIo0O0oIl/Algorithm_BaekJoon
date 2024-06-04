// https://www.acmicpc.net/problem/18111

//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr), cout.tie(nullptr);
//
//	int n, m;
//	long long b;		// 가지고 있는 블럭 수
//	int land[501][501];
//
//	float avg = 0;		// 평균값
//	int time = 0;
//	int bb = 0;		// 가질 수 있는 블럭 수
//	int need = 0;		// 필요한 블럭 수
//
//	cin >> n >> m >> b;
//	
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> land[i][j];
//			avg += land[i][j];
//		}
//	}
//	
//	avg /= n * m;
//	
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (land[i][j] != avg)		// 돌다가 평균이 아니면
//			{
//				if (land[i][j] > avg)		// 평균보다 크면
//				{
//					time = 2 * (land[i][j] - avg);
//					bb += land[i][j] - avg;		// 쓸 수 있는 블럭 추가
//				}
//				else		// 평균보다 작으면
//				{
//					need += avg - land[i][j];		// 필요한 블럭들 더해주기
//				}
//			}
//		}
//	}
//
//	if (need != 0)		// 필요한 블럭이 있다면
//	{
//		if (need < b)		// 가지고 있는 것이 더 크면
//		{
//			time += need;
//		}
//		else if (need < b + bb)
//		{
//			time += bb * 2;
//			time += need;
//		}
//	}
//
//	cout << time << " " << round(avg);
//}


	//for (int i = 0; i < n; i++)
	//{
	//	for (int j = 0; j < m; j++)
	//	{
	//		cout << land[i][j] << " ";
	//	}
	//	cout << '\n';
	//}



#include <iostream>
using namespace std;

int main()
{
	int n, m;
	long long b;
	int land[501][501];
	int avg = 0;		// 평균값
	int time = 0;

	int bb, need;
	bb = need = 0;

	cin >> n >> m >> b;
	avg += b;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> land[i][j];
			avg += land[i][j];
		}
	}

	avg = round(avg / (n * m));		// 평균값 구하기

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (land[i][j] != avg)		// 돌다가 평균이 아니면
			{
				if (land[i][j] > avg)		// 평균보다 크면
				{
					time = 2 * (land[i][j] - avg);		// 시간 더해주고
					bb += land[i][j] - avg;		// 쓸 수 있는 블럭 추가
				}
				else		// 평균보다 작으면
				{
					need += avg - land[i][j];		// 필요한 블럭들 더해주기
				}
			}
		}
	}

	if (need != 0)		// 필요한 블럭이 있다면
	{
		if (need < b)		// 가지고 있는 것이 더 크면
		{
			time += need;
		}
		else if (need < b + bb)
		{
			time += bb * 2;
			time += need;
		}
	}

	cout << time << " " << round(avg);
}


/*
1. 배열을 입력 받는다.
2. 평균을 구한다. 구해서 뭐해 int 로 해서 가장 가까운 것으로 한다.??
3. 시간이 있다?


내가 있는 블럭까지 해서 평균을 구해볼까?
*/