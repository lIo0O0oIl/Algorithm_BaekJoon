// https://www.acmicpc.net/problem/5612

//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int n, m, in, out, now = 0, big = 0;
//	cin >> n >> m;
//	now = m;
//	big = m;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> in >> out;
//		now = now + in - out;
//		big = (now < 0) ? 0 : max(now, big);
//		if (big == 0) break;
//	}
//	cout << big;
//}

#include <iostream>
using namespace std;

int main()
{
	int n, m, in, out, now, big;
	cin >> n >> m;
	now = m; big = m;
	for (int i = 0; i < n; i++)
	{
		cin >> in >> out;
		now = now + in - out;
		if (now > big) big = now;
		if (now < 0)
		{
			big = 0;
			break;
		}
	}
	cout << big;
}