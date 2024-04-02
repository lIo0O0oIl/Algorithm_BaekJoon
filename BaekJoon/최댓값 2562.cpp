#include <iostream>
using namespace std;

int main() {
	int a = 0, input, num = 0, realnum = 0;
	while (cin >> input) {
		num++;
		if (input > a) {
			realnum = num;
			a = input;
		}
	}
	cout << a << endl << realnum;
}