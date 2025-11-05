// https://www.acmicpc.net/problem/3004

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	if (n % 2 == 0) cout << ((n / 2) + 1) * ((n / 2) + 1);
//	else cout << (n + 1) / 2 * ((n + 1) / 2 + 1);
//}

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	cout << (n / 2 + 1) * ((n + 1) / 2 + 1);
}