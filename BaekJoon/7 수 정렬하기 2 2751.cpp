// https://www.acmicpc.net/problem/2751

#include <iostream>
#include <algorithm>
using namespace std;

int arr[1001];

int main() {
	int n, input;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(&arr[0], &arr[n]);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << '\n';
	}
}