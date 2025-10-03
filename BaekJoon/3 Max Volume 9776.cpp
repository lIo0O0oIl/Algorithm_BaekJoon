// https://www.acmicpc.net/problem/9776

#include <iostream>
using namespace std;

int main()
{
	int n;
	float r, h, p = 3.14159f, volume = 0, big = 0;
	char shape;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> shape;
		if (shape == 'S')		// ±¸
		{
			cin >> r;
			volume = (4 / 3) * p * r * r * r;
		}
		else if (shape == 'L')		// ¿ø±âµÕ
		{
			cin >> r >> h;
			volume = p * r * r * h;
		}
		else if (shape == 'C')		// ¿ø»Ô
		{
			cin >> r >> h;
			volume = (1 / 3) * p * r * r * h;
		}

		if (volume > big) big = volume;
	}
	cout << fixed;
	cout.precision(3);
	cout << big;
}