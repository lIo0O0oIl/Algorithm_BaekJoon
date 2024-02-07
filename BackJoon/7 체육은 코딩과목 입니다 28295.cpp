// https://www.acmicpc.net/problem/28295

#include <iostream>
using namespace std;

int main() {
	int input, now = 40;		// now는 - 값으로 내려가지 말라고
	for (int i = 0; i < 10; i++)
	{
		cin >> input;
		switch (input)
		{
		case 1:
			now++;		// 우향우
			break;
		case 2:
			now += 2;		// 뒤로 돌아
			break;
		case 3:
			now--;			// 좌향좌
			break;
		}
	}

	switch (now % 4)
	{
	case 0:
		cout << "N";		// 북쪽
		break;
	case 1:
		cout << "E";		// 동쪽
		break;
	case 2:
		cout << "S";		// 남쪽
		break;
	case 3:
		cout << "W";		// 서쪽
		break;
	}
}