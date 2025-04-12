// https://www.acmicpc.net/problem/16462

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	int n;
	float answer = 0;
	string score;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> score;
		if (score != "100")
		{
			for (int i = 0; i < score.size(); i++)
			{
				if (score[i] == '0' || score[i] == '6')
				{
					score[i] = '9';
				}
			}
		}
		answer += stoi(score);
	}
	cout << round(answer / n);

}