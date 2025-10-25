// https://www.acmicpc.net/problem/15953

#include <iostream>
using namespace std;

int main()
{
	int t, a, b, answer = 0;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;
		if (a == 1) answer += 500;
		else if (a >= 2 && a <= 3) answer += 300;
		else if (a >= 4 && a <= 6) answer += 200;
		else if (a >= 7 && a <= 10) answer += 50;
		else if (a >= 11 && a <= 15) answer += 30;
		else if (a >= 16 && a <= 21) answer += 10;

		if (b == 1) answer += 512;
		else if (b >= 2 && b <= 3) answer += 256;
		else if (b >= 4 && b <= 7) answer += 128;
		else if (b >= 8 && b <= 15) answer += 64;
		else if (b >= 16 && b <= 31) answer += 32;

		if (answer == 0) cout << 0 << '\n';
		else cout << answer << "0000\n";
		answer = 0;
	}
}