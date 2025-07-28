// https://www.acmicpc.net/problem/20232

#include <iostream>
using namespace std;

int main()
{
	int y;
	cin >> y;
	switch (y)
	{
	case 1995: cout << "ITMO"; break;
	case 1996:
	case 1997: cout << "SPbSU"; break;
	case 1998:
	case 1999: cout << "ITMO"; break;
	case 2000: cout << "SPbSU"; break;
	case 2001:
	case 2002:
	case 2003:
	case 2004:
	case 2005: cout << "ITMO"; break;
	case 2006: cout << "PetrSU, ITMO"; break;
	case 2007:
	case 2008: cout << "SPbSU"; break;
	case 2009:
	case 2010:
	case 2011:
	case 2012: cout << "ITMO"; break;
	case 2013: cout << "SPbSU"; break;
	case 2014:
	case 2015:
	case 2016:
	case 2017: cout << "ITMO"; break;
	case 2018: cout << "SPbSU"; break;
	case 2019: cout << "ITMO"; break;
	}
}