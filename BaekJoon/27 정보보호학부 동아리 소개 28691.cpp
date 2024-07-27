// https://www.acmicpc.net/problem/28691

#include <iostream>
using namespace std;

int main()
{
	char n;
	cin >> n;
	switch (n)
	{
	case 'M':
		cout << "MatKor";
		break;
	case 'W':
		cout << "WiCys";
		break;
	case 'C':
		cout << "CyKor";
		break;
	case 'A':
		cout << "AlKor";
		break;
	case '$':
		cout << "$clear";
		break;
	}
}