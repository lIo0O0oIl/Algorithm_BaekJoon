// https://www.acmicpc.net/problem/10250

#include <iostream>
#include <string>
using namespace std;

int main() {
	int t, h, w, n;		// 테스트케이스, 높이, 넓이, 몇 번째 사람
	int yy;
	string xx;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> h >> w >> n;
		if (n / h > 0)		// 높이보다 크면
		{
			yy = n % h > 0 ? n % h : h;
			xx = to_string(n % h == 0 ? n / h : n / h + 1);
		}
		else
		{
			yy = n;
			xx = to_string(1);
		}
		cout << yy << (stoi(xx) < 10 ? "0" + xx : xx) << '\n';
	}
}