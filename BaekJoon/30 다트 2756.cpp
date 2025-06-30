// https://www.acmicpc.net/problem/2756

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int t, one = 0, two = 0;
	float x, y;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> x >> y;
			float distance = sqrt(pow(x, 2) + pow(y, 2));
			if (distance <= 3) one += 100;
			else if (distance <= 6) one += 80;
			else if (distance <= 9) one += 60;
			else if (distance <= 12) one += 40;
			else if (distance <= 15) one += 20;
		}
		for (int j = 0; j < 3; j++)
		{
			cin >> x >> y;
			float distance = sqrt(pow(x, 2) + pow(y, 2));
			if (distance <= 3) two += 100;
			else if (distance <= 6) two += 80;
			else if (distance <= 9) two += 60;
			else if (distance <= 12) two += 40;
			else if (distance <= 15) two += 20;
		}
		if (one == two) cout << "SCORE: " << one << " to " << two << ", TIE.\n";
		else if (one > two) cout << "SCORE: " << one << " to " << two << ", PLAYER 1 WINS.\n";
		else cout << "SCORE: " << one << " to " << two << ", PLAYER 2 WINS.\n";
		one = 0;
		two = 0;
	}
}