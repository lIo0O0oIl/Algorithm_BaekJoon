// https://www.acmicpc.net/problem/2609

#include <iostream>
using namespace std;

int main() {
	int n, m, common = 0, multiple = 0;
	cin >> n >> m;
	int big = n > m ? n : m;
	for (int i = big; i >= 2; --i)
	{
		if (n % i == 0 && m % i == 0)		// 큰거부터 내려가다가 
		{
			common = i;
			break;
		}
	}
	cout << common << '\n' << multiple;
}