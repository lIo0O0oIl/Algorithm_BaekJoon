// https://www.acmicpc.net/problem/11034

//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int arr[4];
//	while (cin >> arr[0] >> arr[1] >> arr[2])
//	{
//		sort(arr, arr + 3);
//		cout << max(arr[2] - arr[1], arr[1] - arr[0]) - 1 << '\n';
//	}
//}				// 초에 내가 푼 것.

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	while (cin >> a >> b >> c)
	{
		cout << max(c - b, b - a) - 1 << "\n";
	}
}