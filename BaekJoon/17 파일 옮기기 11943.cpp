// https://www.acmicpc.net/problem/11943

#include <iostream>
using namespace std;

int main() {
	int apple1, orange1, apple2, orange2;
	cin >> apple1 >> orange1 >> apple2 >> orange2;
	cout << (apple1 + orange2 > orange1 + apple2 ? orange1 + apple2 : apple1 + orange2);
	// ũ�ν����� � �Ű� �� ������ �Ǵ�.
}