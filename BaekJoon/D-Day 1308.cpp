// https://www.acmicpc.net/problem/1308

#include <iostream>
using namespace std;

int month[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int main()
{
	int startYear, startMonth, startDay;
	int endYear, endMonth, endDay;
	int d_Day = 0;
	cin >> startYear >> startMonth >> startDay;
	cin >> endYear >> endMonth >> endDay;

	if (endYear - startYear > 1000)		// 년도만 봤을 때 1000을 넘기면
	{
		cout << "gg"; return 0;
	}
	else if (endYear - startYear == 1000)		// 1000년 째이면
	{
		if (endMonth > startMonth)		// 달이 더 크면
		{
			cout << "gg"; return 0;
		}
		else if (endMonth == startMonth)
		{
			if (endDay >= startDay)		// 일이 더 크면
			{
				cout << "gg"; return 0;
			}
		}
	}

	cout << d_Day << endl;		// 이게 왜 -1임!!!

	if (startMonth != endMonth)		// 달이 다르면
	{
		while (startMonth != endMonth)			// 같아질 때까지 돌려주기
		{
			startDay++;
			d_Day++;
			if (startDay > month[startMonth])
			{
				startMonth++;
				startDay = 1;
			}
			if (startMonth > 12)
			{
				startYear++;
				startMonth = 1;
			}
		}
	}
	if (startDay != endDay)
	{
		while (startDay != endDay)
		{
			startDay++;
			d_Day++;
		}
	}
	// 년도가 다르면
	if (startYear != endYear)
	{
		if (startYear % 4 == 0)		// 4로 나뉘어 떨어지면
		{
			if (startYear % 400 == 0)
			{
				d_Day++;
			}
			if (startYear % 100 != 0)
			{
				d_Day++;
			}
		}
		while (startYear != endYear)
		{
			startYear++;
			d_Day += 365;
			if (startYear % 4 == 0)		// 4로 나뉘어 떨어지면
			{
				if (startYear % 400 == 0)
				{
					d_Day++;
					continue;
				}
				if (startYear % 100 == 0) continue;
				d_Day++;
			}
		}
	}
	cout << "D-" << d_Day;
}


/*

로직은
일단 달과 일을 맞춘다음에
년도를 더하면서 일짜를 넣어줌.

달이 안맞는다?
그럼 일자에 플러스를 해주면서 해당 달의 일보다 크면 다음 달로 넘어가게 해줌.
어 그러다 연도가 달라지면 + 365 해주는데 윤년인 날이면 366 해서 넘어가는 것.

1 1 1
1 1 2
D-1

1000 1 2
1000 5 1
D-119

1000 1 1
1000 1 2
D-1

399 3 3
1400 3 2
gg

399 3 1
1399 2 28
D-365242				-> 이거 마지막자리가 1로 나옴. 아마 윤년 때문에?

2008 12 27
3008 6 5
365037

2013 2 28
2013 3 1
1

1999 01 01
2001 01 01
731

1000 1 2
2000 1 1
D-365243
*/