// https://www.acmicpc.net/problem/29766

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int count = 0;
	string input;
	cin >> input;

	while (input.find("DKSH") != string::npos)
	{
		input.erase(input.find("DKSH"), 4);
		count++;
	}
	cout << count;
}