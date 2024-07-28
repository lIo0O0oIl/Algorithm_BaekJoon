// https://www.acmicpc.net/problem/1308

//#include <iostream>
//using namespace std;
//
//int month[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//int main()
//{
//	int startYear, startMonth, startDay;
//	int endYear, endMonth, endDay;
//	int d_Day = 0;
//	cin >> startYear >> startMonth >> startDay;
//	cin >> endYear >> endMonth >> endDay;
//
//	if (endYear - startYear > 1000)		// 년도만 봤을 때 1000을 넘기면
//	{
//		cout << "gg"; return 0;
//	}
//	else if (endYear - startYear == 1000)		// 1000년 째이면
//	{
//		if (endMonth > startMonth)		// 달이 더 크면
//		{
//			cout << "gg"; return 0;
//		}
//		else if (endMonth == startMonth)
//		{
//			if (endDay >= startDay)		// 일이 더 크면
//			{
//				cout << "gg"; return 0;
//			}
//		}
//	}
//
//	cout << d_Day << endl;		// 이게 왜 -1임!!!
//
//	if (startMonth != endMonth)		// 달이 다르면
//	{
//		while (startMonth != endMonth)			// 같아질 때까지 돌려주기
//		{
//			startDay++;
//			d_Day++;
//			if (startDay > month[startMonth])
//			{
//				startMonth++;
//				startDay = 1;
//			}
//			if (startMonth > 12)
//			{
//				startYear++;
//				startMonth = 1;
//			}
//		}
//	}
//	if (startDay != endDay)
//	{
//		while (startDay != endDay)
//		{
//			startDay++;
//			d_Day++;
//		}
//	}
//	// 년도가 다르면
//	if (startYear != endYear)
//	{
//		if (startYear % 4 == 0)		// 4로 나뉘어 떨어지면
//		{
//			if (startYear % 400 == 0)
//			{
//				d_Day++;
//			}
//			if (startYear % 100 != 0)
//			{
//				d_Day++;
//			}
//		}
//		while (startYear != endYear)
//		{
//			startYear++;
//			d_Day += 365;
//			if (startYear % 4 == 0)		// 4로 나뉘어 떨어지면
//			{
//				if (startYear % 400 == 0)
//				{
//					d_Day++;
//					continue;
//				}
//				if (startYear % 100 == 0) continue;
//				d_Day++;
//			}
//		}
//	}
//	cout << "D-" << d_Day;
//}



#include <iostream>
	using namespace std;

	int IsLeapYear(int y)
	{
		if (y % 400 == 0)
			return 366;
		else
		{
			if (y % 100 == 0)
				return 365;
			else
			{
				if (y % 4 == 0)
					return 366;
				else
					return 365;
			}
		}
	}

	int CounDay(int a[13], int y, int m, int d)
	{
		int b = d;

		for (int i = 1; i < m; i++)
			b += a[i];
		return b;
	}

	int day = 0;

	int nomal[13] = { 365, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int leap[13] = { 366, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int main()
	{
		int y1, m1, d1, y2, m2, d2;

		cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;

		if (IsLeapYear(y1) == 365)
			day += (365 - CounDay(nomal, y1, m1, d1));
		else
			day += (366 - CounDay(leap, y1, m1, d1));

		for (int i = y1 + 1; i < y2; i++)
			day += IsLeapYear(i);

		if (IsLeapYear(y2) == 365)
			day += CounDay(nomal, y2, m2, d2);
		else
			day += CounDay(leap, y2, m2, d2);

		if (y1 == y2)
		{
			if (IsLeapYear(y1) == 365)
				cout << "D-" << CounDay(nomal, y2, m2, d2) - CounDay(nomal, y1, m1, d1);
			else
				cout << "D-" << CounDay(leap, y2, m2, d2) - CounDay(leap, y1, m1, d1);
		}
		else if (y2 - y1 > 1000 || (y2 - y1 == 1000 && (m1 < m2 || (m1 == m2 && d1 <= d2))))
			cout << "gg";
		else
			cout << "D-" << day;
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