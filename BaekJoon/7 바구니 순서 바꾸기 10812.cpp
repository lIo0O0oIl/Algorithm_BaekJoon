// https://www.acmicpc.net/problem/10812

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m, begin, mid, end;
	cin >> n >> m;
	vector<int> arr(n + 1);
	for (int i = 1; i <= n; i++)
	{
		arr[i] = i;
	}
	for (int i = 0; i < m; i++)
	{
		cin >> begin >> end >> mid;
		vector<int> temp;
		for (int j = mid; j <= end; j++)
		{
			temp.push_back(arr[j]);
		}
		for (int j = begin; j < mid; j++)
		{
			temp.push_back(arr[j]);
		}

		int count = 0;
		for (int j = begin; j <= end; j++)
		{
			arr[j] = temp[count];
			count++;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		cout << arr[i] << ' ';
	}
}

/*
10 5
1 6 4
3 9 8
2 10 5
1 3 3
2 6 2

0. 1 2 3 4 5 6 7 8 9 10
1. 4 5 6 1 2 3 7 8 9 10
2. 4 5 8 9 6 1 2 3 7 10
3. 4 6 1 2 3 7 10 5 8 9
4. 1 4 6 2 3 7 10 5 8 9
5. 1 4 6 2 3 7 10 5 8 9
*/