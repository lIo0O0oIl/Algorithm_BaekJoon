// https://www.acmicpc.net/problem/2530

#include <iostream>
using namespace std;

int main() {
	int h, m, s, d;
	cin >> h >> m >> s >> d;

	int h2, m2, s2;
	s2 = (d % 60);		// �� ���ϱ�
	m2 = ((d / 60) % 60);		// �� ���ϱ�
	h2 = ((d / 60) / 60);		// �ð� ���ϱ�

	if (s + s2 >= 60) {
		m2++;
		s += s2 - 60;
	}
	else {
		s += s2;
	}

	if (m + m2 >= 60) {
		h2++;
		m += m2 - 60;
	}
	else {
		m += m2;
	}

	if (h + h2 >= 24) {
		h += h2 - 24;
	}
	else {
		h += h2;
	}

	cout << h << " " << m << " " << s;
}