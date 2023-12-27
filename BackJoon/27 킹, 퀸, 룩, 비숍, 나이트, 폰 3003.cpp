// https://www.acmicpc.net/problem/3003

#include <iostream>
using namespace std;

int chess[6] = { 1, 1, 2, 2, 2, 8 };

int main() {
	int input;
	for (int i = 0; i < 6; i++)
	{
		cin >> input;
		cout << chess[i] - input << " ";
	}
}