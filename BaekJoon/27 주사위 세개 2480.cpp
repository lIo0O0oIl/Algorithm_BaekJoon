// https://www.acmicpc.net/problem/2480

#include <iostream>
using namespace std;

int main() {
	int arr[3];
	int temp = 0;
	cin >> arr[0] >> arr[1] >> arr[2];
	if (arr[0] == arr[1] && arr[1] == arr[2]) {
		cout << 10000 + arr[0] * 1000;
	}
	else if (arr[0] == arr[1] || arr[0] == arr[2]) {
		cout << 1000 + arr[0] * 100;
	}
	else if (arr[1] == arr[2]) {
		cout << 1000 + arr[1] * 100;
	}
	else {
		for (int i = 0; i < 3; i++)
		{
			if (arr[i] > temp) {
				temp = arr[i];
			}
		}
		cout << temp * 100;
	}
}