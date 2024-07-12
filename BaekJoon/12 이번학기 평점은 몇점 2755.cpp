// https://www.acmicpc.net/problem/2755

#include <iostream>
using namespace std;

int main()
{
	int n, iScore;
	string name, sScore;
	float avg = 0, multiply = 0, totalIScore;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> name >> iScore >> sScore;
		if (sScore == "A+") multiply += 4.3f;
		else if (sScore == "A0") multiply += 4.0f;
		else if (sScore == "A-") multiply += 3.7f;
		else if (sScore == "B+") multiply += 3.3f;
		else if (sScore == "B0") multiply += 3.0f;
		else if (sScore == "B-") multiply += 2.7f;
		else if (sScore == "C+") multiply += 2.3f;
		else if (sScore == "C0") multiply += 2.0f;
		else if (sScore == "C-") multiply += 1.7f;
		else if (sScore == "D+") multiply += 1.3f;
		else if (sScore == "D0") multiply += 1.0f;
		else if (sScore == "D-") multiply += 0.7f;

		multiply *= iScore;
		totalIScore += iScore;
		avg += multiply;
		multiply = 0;
	}
	cout << fixed;
	cout.precision(2);
	cout << avg / totalIScore;
}