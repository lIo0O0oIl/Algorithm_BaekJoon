// https://www.acmicpc.net/problem/34032

#include <iostream>
using namespace std;

int main()
{
	float n;
	int ggCount = 0;
	char input;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (input == 'O') ggCount++;
	}
	if (ggCount >= n / 2) cout << "Yes";
	else cout << "No";
}