#include <iostream>
using namespace std;

int main() {
	int input;
	cin >> input;
	if (input % 4 == 0) {		// 4�� ����̸�
		if (input % 100 != 0) {		// 100�� ����� �ƴϸ� 
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