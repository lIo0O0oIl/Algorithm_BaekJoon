// https://www.acmicpc.net/problem/2845

#include <iostream>
using namespace std;

int main() {
	int a, b, input;
	cin >> a >> b;
	for (int i = 0; i < 5; i++)
	{
		cin >> input;
		cout << input - (a * b) << " ";
	}
}