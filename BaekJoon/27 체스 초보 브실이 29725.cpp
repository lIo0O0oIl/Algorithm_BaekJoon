// https://www.acmicpc.net/problem/29725

#include <iostream>
using namespace std;

int main()
{
	int black = 0, white = 0;
	for (int i = 0; i < 64; i++)
	{
		char temp;
		cin >> temp;
		switch (temp)
		{
		case 'P': white++; break;
		case 'p': black++; break;
		case 'N':
		case 'B': white += 3; break;
		case 'n':
		case 'b': black += 3; break;
		case 'R': white += 5; break;
		case 'r': black += 5; break;
		case 'Q': white += 9; break;
		case 'q': black += 9; break;
		}
	}
	cout << white - black;
}

// 백 기물 - 흑 기물 = 기물 점수