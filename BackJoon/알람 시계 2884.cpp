#include <iostream>
using namespace std;

int main() {
	int h, m, outputH, outputM;
	cin >> h >> m;

	if (m - 45 < 0) {		// 음수가 되면
		int a = 0;
		a = m - 45;
		outputM = 60 + a;
		//cout << outputM;
		outputH = h - 1;
		if (h <= 0) {		// 시간이 0시면
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