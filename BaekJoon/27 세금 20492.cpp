// https://www.acmicpc.net/problem/20492

#include <iostream>
using namespace std;

int main() {
	int n, one, two;
	cin >> n;
	one = n - (n * 0.22);		// 전체 - 0.22% 빼준 금액
	two = n - ((n - (n * 0.8)) * 0.22);	
	cout << one << " " << two;
}