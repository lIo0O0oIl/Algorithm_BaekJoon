// https://www.acmicpc.net/problem/33753

#include <iostream>
using namespace std;

int main()
{
	int a, b, c, t;
	cin >> a >> b >> c >> t;
	if (t <= 30)
	{
		cout << a;
	}
	else
	{
		t -= 30;
		if (t % b != 0)
		{
			cout << a + (t / b + 1) * c;
		}
		else cout << a + t / b * c;
	}
}