// https://www.acmicpc.net/problem/3028

#include <iostream>
using namespace std;

int main()
{
	int arr[] = { 1, 0, 0 };
	int temp;
	string input;
	cin >> input;
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] == 'A') 
		{
			temp = arr[0];
			arr[0] = arr[1];
			arr[1] = temp;
		}
		else if (input[i] == 'B')
		{
			temp = arr[1];
			arr[1] = arr[2];
			arr[2] = temp;
		}
		else if (input[i] == 'C')
		{
			temp = arr[2];
			arr[2] = arr[0];
			arr[0] = temp;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if (arr[i] == 1)
		{
			cout << i + 1;
		}
	}
}

/*
½ÃÀÛÀº 1

*/