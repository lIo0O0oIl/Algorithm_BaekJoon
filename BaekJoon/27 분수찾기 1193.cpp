// https://www.acmicpc.net/problem/1193

#include <iostream>
using namespace std;

int main()
{
	int parent, child, row, col;
	parent = child = row = col = 1;
	long long a;
	cin >> a;
	for (long long i = 1; i < a; i++)		// a = 1 이면 실행 안함
	{
		if (row == col)
		{
			row++;
			col = 1;
			if (row % 2 == 0)		// 짝수이면
			{
				parent = row;
				child = 1;
			}
			else
			{
				parent = 1;
				child = row;
			}
		}
		else
		{
			col++;
			if (row % 2 == 0)		// 짝수줄이면
			{
				parent--;
				child++;
			}
			else
			{
				parent++;
				child--;
			}
		}
	}
	cout << child << "/" << parent;
}

/*
1/1
1/2, 2/1
3/1, 2/2, 1/3
1/4, 2/3, 3/2, 4/1
5/1, 4/2, 3/3, 2/4, 1/5

분모분자를 하나씩 빼고 더해주는 식으로 열이 이동함
행은 홀수와 짝수로 분모 분자 위치가 바뀜.

*/