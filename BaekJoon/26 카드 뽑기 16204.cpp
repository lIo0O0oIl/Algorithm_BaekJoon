// https://www.acmicpc.net/problem/16204

#include <iostream>
using namespace std;

int main() {
	int n, m, k, answer = 0;
 cin >> n >> m >> k;
 answer += (m >= k ? k : m);
 answer += (n - m >= n - k ? n - k : n - m);
 cout << answer;
}