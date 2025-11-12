// https://www.acmicpc.net/problem/15340

#include <iostream>
using namespace std;

int main()
{
	int call, data, small = 400000;
	while (true)
	{
		cin >> call >> data;
		if (call == 0 && data == 0) break;
		if (call * 30 + data * 40 < small) small = call * 30 + data * 40;
		if (call * 35 + data * 30 < small) small = call * 35 + data * 30;
		if (call * 40 + data * 20 < small) small = call * 40 + data * 20;
		cout << small << '\n';
		small = 400000;
	}
}