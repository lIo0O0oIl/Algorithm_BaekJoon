//https://www.acmicpc.net/problem/10768

#include <iostream>
using namespace std;

int main() {
	int month, day;
	cin >> month >> day;
	if (month > 2) {
		cout << "After";
	}
	else if (month == 2) {
		if (day > 18) {
			cout << "After";
		}
		else if (day == 18) {
			cout << "Special";
		}
		else {
			cout << "Before";
		}
	}
	else {
		cout << "Before";
	}
}