// https://www.acmicpc.net/problem/9063

#include <iostream>
using namespace std;

int main()
{
	int n, inputX, inputY, xMin, xMax, yMin, yMax;
	xMin = yMin = 10001;
	xMax = yMax = -10001;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> inputX >> inputY;

		if (xMin > inputX) xMin = inputX;
		if (xMax < inputX) xMax = inputX;

		if (yMin > inputY) yMin = inputY;
		if (yMax < inputY) yMax = inputY;
	}
	//cout << xMin << " " << xMax << " " << yMin << " " << yMax << " ";
	cout << (xMax - xMin) * (yMax - yMin);
}