// https://www.acmicpc.net/problem/2754

#include <iostream>
using namespace std;

int main()
{
	string input;
	cin >> input;

	if (input == "A+") cout << 4.3;
	else if (input == "A0") cout << 4.0f;
	else if (input == "A-") cout << 3.7f;
	else if (input == "B+") cout << 3.3f;
	else if (input == "B0") cout << 3.0f;
	else if (input == "B-") cout << 2.7f;
	else if (input == "C+") cout << 2.3f;
	else if (input == "C0") cout << 2.0f;
	else if (input == "C-") cout << 1.7f;
	else if (input == "D+") cout << 1.3f;
	else if (input == "D0") cout << 1.0f;
	else if (input == "D-") cout << 0.7f;
	else if (input == "F") cout << 0.0f;
}