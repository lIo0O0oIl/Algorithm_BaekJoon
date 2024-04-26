// https://www.acmicpc.net/problem/29699

#include <iostream>
using namespace std;

int main() {
	int n;
	char arr[] = "WelcomeToSMUPC";
	cin >> n;
	while (n > 14)
	{
		n -= 14;
	}
	cout << arr[n - 1];
}