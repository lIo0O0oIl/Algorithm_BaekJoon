//https://www.acmicpc.net/problem/20254

#include <iostream>
using namespace std; 

int main()
{
	int ur, tr, uo, to;
	cin >> ur >> tr >> uo >> to;
	cout << (ur * 56)+(tr * 24)+(uo * 14)+(to * 6);
}