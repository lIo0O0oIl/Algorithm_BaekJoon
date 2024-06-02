// https://www.acmicpc.net/problem/2292

#include <iostream>
using namespace std;

int main()
{
	long long n, level = 0, step = 1, now = 0;
	cin >> n;
	while (now + 1 < n)
	{
		level += 6;
		now += level;
		//cout << now << endl;
		step++;
	}
	cout << step;
}

/*
6. 12, 18, 24


6. 18, 36, 60



*/