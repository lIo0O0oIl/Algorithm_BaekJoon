// https://www.acmicpc.net/problem/5585

#include <iostream>
using namespace std;

int main()
{
	int n, answer = 0;
	cin >> n;
	int money = 1000 - n;
	answer += money / 500;
	money %= 500;
	answer += money / 100;
	money %= 100;
	answer += money / 50;
	money %= 50;
	answer += money / 10;
	money %= 10;
	answer += money / 5;
	money %= 5;
	answer += money / 1;
	cout << answer;
}