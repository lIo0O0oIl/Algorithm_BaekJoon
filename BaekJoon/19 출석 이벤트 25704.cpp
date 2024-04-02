// https://www.acmicpc.net/problem/25704

#include <iostream>
using namespace std;

int main() {
	int n, p, answer, temp;
	cin >> n >> p;
	answer = p;
	if (n >= 20)
	{
		temp = p * 0.75f;
		if (answer > temp) answer = temp;
	}
	if (n >= 15)
	{
		temp = p - 2000;
		if (answer > temp) answer = temp;
	}
	if (n >= 10)
	{
		temp = p * 0.9f;
		if (answer > temp) answer = temp;
	}
	if (n >= 5)
	{
		temp = p - 500;
		if (answer > temp) answer = temp;
	}

	cout << (answer >= 0 ? answer : 0);
}