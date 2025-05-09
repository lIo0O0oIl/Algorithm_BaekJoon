// https://www.acmicpc.net/problem/5032

#include <iostream>
using namespace std;

int main()
{
	int e, f, c, answer = 0;
	cin >> e >> f >> c;
	e += f;
	while (true)
	{
		int temp = e % c;
		e = (e / c);
		if (e == 0) break;
		answer += e;
		e += temp;
	}
	cout << answer;
}

/*
10 = 5
5 = 2
3 = 1
2 = 1
1 = 0

9

2°³¿¡ ¹Ù²ãÁÜ

*/