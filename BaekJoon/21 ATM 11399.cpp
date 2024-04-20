// https://www.acmicpc.net/problem/11399

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, answer = 0;
	int arr[1001];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			answer += arr[j];
		}
	}
	cout << answer;
}


/*
p1 = 3
p2 = 1
p3 = 4
p4 = 3
p5 = 2


1 2 3 3 4
1 = 1
1 2 = 3
1 2 3 = 6
1 2 3 3 = 9
1 2 3 3 4 = 13
= 32

*/