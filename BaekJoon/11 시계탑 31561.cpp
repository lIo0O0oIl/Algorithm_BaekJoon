// https://www.acmicpc.net/problem/31561

#include <iostream>
using namespace std;

int main() {
	double n;
	cin >> n;
	
	cout << fixed;
	cout.precision(1);		// �Ҽ��� ù���� ����

	cout << (n < 30 ? n / 2 : 15 + ((n - 30) / 2 * 3));
}


/*
30 = 15

31 = 17
15�� ���ְ� 2�� 2�� ������ �������ش�.

32 = 18

50 = 45
50 - 30 = 20
20 : 30
15 + 30 = 45

47 = 40.5
47 - 30 = 17
17 : 25.5
15 + 25.5 = 

*/