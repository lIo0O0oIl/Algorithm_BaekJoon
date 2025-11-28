// https://www.acmicpc.net/problem/14909

#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int input, answer = 0;
	while (cin >> input)
	{
		if (input > 0) answer++;
	}
	cout << answer;
}