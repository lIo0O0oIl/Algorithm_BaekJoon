// https://www.acmicpc.net/problem/30017

#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	cout << (b == a - 1 ? a + b : (b >= a ? a + a - 1 : b + b + 1));
	// b 가 a에서 1 뺀거랑 같으면 그대로 더하기
	// 위가 아니고 b 가 a보다 크거나 같은 것 이면 a + a - 1
	// 위가 다 아니면 b + b + 1;
}