// https://www.acmicpc.net/problem/2921

// ���� ���
#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	cout << n * (n + 1) * (n + 2) / 2;
}


// ����Ž��
#include <iostream>
using namespace std;

int main() {
	int n, sum = 0;
	cin >> n;

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= i; j++) {
			sum += i + j;
		}
	}
	cout << sum;
}