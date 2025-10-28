// https://www.acmicpc.net/problem/4504

#include <iostream>
using namespace std; 

int main()
{
	int n, input;
	cin >> n;
	while (true)
	{
		cin >> input;
		if (input == 0) break;
		if (input % n == 0) cout << input << " is a multiple of " << n << ".\n";
		else cout << input << " is NOT a multiple of " << n << ".\n";
	}
}