// https://www.acmicpc.net/board/view/88333

#include <iostream>
using namespace std;

int main()
{
	int x, n, data, use;
	cin >> x >> n;
	data = x * n;
	for (int i = 0; i < n; i++)
	{
		cin >> use;
		data -= use;
	}
	cout << data + x;
}