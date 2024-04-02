// https://www.acmicpc.net/problem/30501

#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	string input;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (input.find("S") != string::npos)
		{
			cout << input;
		}
	}
}