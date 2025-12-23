// https://www.acmicpc.net/problem/10406

#include <iostream>
using namespace std;

int main()
{
	int w, n, p, punche, answer = 0;
	cin >> w >> n >> p;
	for (int i = 0; i < p; i++)
	{
		cin >> punche;
		if (punche >= w && punche <= n) answer++;
	}
	cout << answer;
}