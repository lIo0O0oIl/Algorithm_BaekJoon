// https://www.acmicpc.net/problem/25285

#include <iostream>
using namespace std;

int main()
{
	int t;
	float cm, kg, bmi;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> cm >> kg;
		bmi = kg / ((cm * 0.01) * (cm * 0.01));
		if (cm < 140.1) cout << 6 << '\n';
		else if (cm >= 140.1 && cm < 146) cout << 5 << '\n';
		else if (cm >= 146 && cm < 159) cout << 4 << '\n';
		else if (cm >= 159 && cm < 161)
		{
			if (bmi >= 16.0f && bmi < 35.0f) cout << 3 << '\n';
			else if (bmi < 16.0f || bmi >= 35.0f) cout << 4 << '\n';
		}
		else if (cm >= 161 && cm < 204)
		{
			if (bmi >= 20.0f && bmi < 25.0f) cout << 1 << '\n';
			else if ((bmi >= 18.5f && bmi < 20.0f) ||
				(bmi >= 25.0f && bmi < 30.0f)) cout << 2 << '\n';
			else if ((bmi >= 16.0f && bmi < 18.5f) ||
				(bmi >= 30.0f && bmi < 35.0f)) cout << 3 << '\n';
			else if (bmi < 16.0f || bmi >= 35.0f) cout << 4 << '\n';
		}
		else if (cm >= 204) cout << 4 << '\n';
	}
}