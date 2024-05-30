// https://www.acmicpc.net/problem/1676

#include <iostream>
using namespace std;

int main()
{
	int n, count = 0;
	cin >> n;
	while (n / 5 > 0)
	{
		count += n / 5;
		n /= 5;
	}
	cout << count;
}

/*

50 = 12
이 안에는 5랑 25가 들어있음. 그래서 2 추가됨.

팩토리얼 N!
1 * 2 * 3 = 6
0

1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9 * 10 = 3628800
=

5를 넘으면 0의 개수가 추가됨? 5마다 0의 개수가 나옴?

5의 제곱이 들어가있으면 0의 수가 더해짐?
5, 25, 125, 등....

*/