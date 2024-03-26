// https://www.acmicpc.net/problem/11365

#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	while (true)
	{
		getline(cin, input);
		if (input == "END") break;
		for (int i = input.size() - 1; i >= 0; i--)
		{
			cout << input[i];
		}
		cout << '\n';
	}
}