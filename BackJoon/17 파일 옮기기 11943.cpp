// https://www.acmicpc.net/problem/11943

#include <iostream>
using namespace std;

int main() {
	int apple1, orange1, apple2, orange2;
	cin >> apple1 >> orange1 >> apple2 >> orange2;
	cout << (apple1 + orange2 > orange1 + apple2 ? orange1 + apple2 : apple1 + orange2);
	// 크로스에서 어떤 거가 더 많은지 판단.
}