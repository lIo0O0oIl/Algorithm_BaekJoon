// https://www.acmicpc.net/problem/1735

#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int a1, a2, b1, b2;
	cin >> a1 >> b1 >> a2 >> b2;

	int ob1, ob2;
	int a1Count = 1, a2Count = 1;		// 분자에 얼마나 곱해지는지
	ob1 = b1;
	ob2 = b2;
	
	while (true)
	{
		if (b1 == b2)
		{
			a1 *= a1Count;
			a2 *= a2Count;
			break;
		}
		else if (b2 > b1)
		{
			b1 += ob1;
			a1Count++;
		}
		else
		{
			b2 += ob2;
			a2Count++;
		}
	}
	
	int endA, endB;
	endA = a1 + a2;
	endB = b1;

	// 두 수의 최대공약수 구하기
	int now = 1;
	int down = endA >= endB ? endB : endA;		// 더 작은거 찾기
	for (int i = 2; i <= down; i++)
	{
		if (endA % i == 0 && endB % i == 0)
		{
			now = i;
		}
	}

	endA = endA / now;
	endB = endB / now;

	cout << endA << ' ' << endB;
}