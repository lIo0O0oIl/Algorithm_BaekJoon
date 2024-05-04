// https://www.acmicpc.net/problem/13866

#include <iostream>
using namespace std;

int main() {
	int arr[4];
	int a, b, answer;
	for (int i = 0; i < 4; i++)
	{
		cin >> arr[i];
	}
	a = arr[0] + arr[3];
	b = arr[1] + arr[2];
	if (a > b)
	{
		answer = a - b;
	}
	else
	{
		answer = b - a;
	}
	cout << answer;
}