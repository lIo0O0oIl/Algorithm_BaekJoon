// https://www.acmicpc.net/problem/10039

#include <iostream>
using namespace std;

int main() {
	int input, add = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> input;
		if (input < 40) add += 40;
		else add += input;
	}
	cout << add / 5;
}