// https://www.acmicpc.net/problem/30017

#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	cout << (b == a - 1 ? a + b : (b >= a ? a + a - 1 : b + b + 1));
	// b �� a���� 1 ���Ŷ� ������ �״�� ���ϱ�
	// ���� �ƴϰ� b �� a���� ũ�ų� ���� �� �̸� a + a - 1
	// ���� �� �ƴϸ� b + b + 1;
}