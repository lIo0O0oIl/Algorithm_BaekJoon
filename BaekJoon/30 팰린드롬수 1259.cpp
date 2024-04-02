// https://www.acmicpc.net/problem/1259

#include <iostream>
using namespace std;

int main() {
	string input, temp = "";
	while (cin >> input)
	{
		if (input == "0") break;
		for (int i = input.size() - 1; i >= 0; i--)
		{
			temp += input[i];
		}
		if (input == temp)
		{
			cout << "yes" << '\n';
		}
		else cout << "no" << '\n';
		temp = "";
	}
}