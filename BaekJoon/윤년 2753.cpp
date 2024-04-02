#include <iostream>
using namespace std;

int main() {
	int input;
	cin >> input;
	if (input % 4 == 0) {		// 4의 배수이면
		if (input % 100 != 0) {		// 100의 배수가 아니면 
			cout << "1";
			return 0;
		}
		if (input % 400 == 0) {
			cout << "1";
			return 0;
		}
	}
	cout << "0";
}