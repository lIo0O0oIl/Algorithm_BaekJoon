// https://www.acmicpc.net/problem/25372

#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (input.size() <= 9 || input.size() <= 6) {		// 9자리이면
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
}
