// https://www.acmicpc.net/problem/11723

#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int n = 0, m, num;
	string input;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> input;
		if (input == "all")
		{
			n = ~0;		// or 연산
			continue;
		}
		else if (input == "empty")
		{
			n &= 0;
			continue;
		}
		cin >> num;
		if (input == "add") n |= (1 << num);		// or 연산
		else if (input == "remove") n &= ~(1 << num);		// and 연산 + not 반전 연산
		else if (input == "check") cout << (bool)(n & (1 << num)) << '\n';	// and 연산으로 있는지 확인
		else if (input == "toggle") n ^= (1 << num);
	}
}

/*
13
add 1
add 2
check 1
check 2
check 3
remove 2
check 1
check 2
toggle 3
check 1
check 2
check 3
check 4

1
1
0
1
0
1
0
1
0


all
check 10
check 20
toggle 10
remove 20
check 10
check 20
empty
check 1
toggle 1
check 1
toggle 1
check 1

1
1
0
0
0
1
0


64만 32만 16만 8만
4만 2만 만 5천
2048 1024 512 256
128 64 32 16
8 4 2 1
*/