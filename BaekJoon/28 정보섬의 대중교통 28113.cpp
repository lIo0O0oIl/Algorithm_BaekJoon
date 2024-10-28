// https://www.acmicpc.net/problem/28113

#include <iostream>
using namespace std;

int main()
{
	int n, a, b;		// 지하철까지 걸어가는 시간, 버스, 지하철
	cin >> n >> a >> b;

	if (a < b) cout << "Bus";
	else if (a > b) cout << "Subway";
	else cout << "Anything";
}