// https://www.acmicpc.net/problem/15059

#include <iostream>
using namespace std;

int main()
{
	int arr[3], input, answer = 0;
	cin >> arr[0] >> arr[1] >> arr[2];
	for (int i = 0; i < 3; i++)
	{
		cin >> input;
		if (input > arr[i]) answer += input - arr[i];
	}
	cout << answer;
}