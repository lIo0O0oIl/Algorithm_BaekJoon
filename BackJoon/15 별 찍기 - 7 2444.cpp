// https://www.acmicpc.net/problem/2444

#include <iostream>
using namespace std;

int main() {
	int n;
	bool a = false;
	cin >> n;


	for (int i = 0; i < n - 1; i++)		// - 1만큼해주기
	{
		for (int j = 0; j < (n - 1) - i; j++)
		{
			cout << " ";
		}
		for (int k = 0; k < (i * 2) + 1; k++)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++)		// 아래꺼
	{
		for (int k = 0; k < i; k++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2 * n - i * 2 - 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}