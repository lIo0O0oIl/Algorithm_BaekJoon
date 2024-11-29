// https://www.acmicpc.net/problem/30794

#include <iostream>
using namespace std;

int main()
{
	int level;
	string score;
	cin >> level >> score;
	switch (score[0])
	{
	case 'm':
		cout << 0;
		break;
	case 'b':
		cout << 200 * level;
		break;
	case 'c':
		cout << 400 * level;
		break;
	case 'g':
		cout << 600 * level;
		break;
	case 'p':
		cout << level * 1000;
		break;
	}
}