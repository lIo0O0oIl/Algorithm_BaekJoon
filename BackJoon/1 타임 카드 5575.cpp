// https://www.acmicpc.net/problem/5575

#include <iostream>
using namespace std;

int main() {
	int h, m, s;
	int h2, m2, s2;
	int tempH, tempM, tempS;
	for (int i = 0; i < 3; i++)
	{
		cin >> h >> m >> s;
		cin >> h2 >> m2 >> s2;
		if (s2 - s < 0)
		{
			tempS = (60 + s2) - s;
			m2--;
		}
		else
		{
			tempS = s2 - s;
		}
		if (m2 - m < 0)
		{
			tempM = (60 + m2) - m;
			h2--;
		}
		else
		{
			tempM = m2 - m;
		}
		tempH = h2 - h;
		cout << tempH << " " << tempM << " " << tempS << '\n';
	}
}