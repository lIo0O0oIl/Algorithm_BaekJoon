#include <iostream>
using namespace std;

int main() {
	int h, m, outputH, outputM;
	cin >> h >> m;

	if (m - 45 < 0) {		// ������ �Ǹ�
		int a = 0;
		a = m - 45;
		outputM = 60 + a;
		//cout << outputM;
		outputH = h - 1;
		if (h <= 0) {		// �ð��� 0�ø�
			outputH = 23;
		}
	}
	else {
		outputH = h;
		outputM = m - 45;
	}

	//cout << endl;
	cout << outputH << " " << outputM;
}