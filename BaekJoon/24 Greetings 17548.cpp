// https://www.acmicpc.net/problem/17548

#include <iostream>
using namespace std;

int main()
{
	string hi;
	cin >> hi;
	for (int i = 0; i < hi.size(); i++)
	{
		if (hi[i] == 'e') cout << "ee";
		else cout << hi[i];
	}
}