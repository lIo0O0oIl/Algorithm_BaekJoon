// https://www.acmicpc.net/problem/2965

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a, b, c, count = 0;
//	cin >> a >> b >> c;
//	while (!(b - a == 1 && c - b == 1))
//	{
//		if (b - a >= c - b) // 오른쪽이 거리가 더 멀면
//		{
//			c = b;
//			b = a + 1;
//		}
//		else
//		{
//			a = b;
//			b = c - 1;
//		}
//		count++;
//	}
//	cout << count;
//}

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << (b - a < c - b ? c - b - 1 : b - a - 1);
}