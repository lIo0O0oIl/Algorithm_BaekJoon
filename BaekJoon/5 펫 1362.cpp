// https://www.acmicpc.net/problem/1362

#include <iostream>
#include <string>
using namespace std;

int main() {
	string input, temp;
	bool die = false;
	int scenario = 1, weightMin, weighBig, nowWeight;
	while (getline(cin, input)) {
		if (input == "# 0") {
			// 다음 시나리오 사용한 변수들 다 초기화

			cout << scenario << " ";
			if (nowWeight > weightMin && nowWeight < weighBig && !die) {
				cout << ":-)" << endl;
			}
			else if (!die) {
				cout << ":-(" << endl;
			}
			else {
				cout << "RIP" << endl;
			}
			scenario++;
			die = false;
			// 초기확
			continue;
		}
		else if (input == "0 0") {
			break;
		}

		if (input[0] == 'F') {		// 증가
			nowWeight += stoi(input.substr(input.find(" ") + 1));
		}
		else if (input[0] == 'E') {		// 아파
			nowWeight -= stoi(input.substr(input.find(" ") + 1));
			if (nowWeight <= 0) {
				die = true;
			}
		}
		else {		// 시나리오 시작하고 적정체중과 실제 제충이 나옴.
			nowWeight = stoi(input.substr(input.find(' ') + 1));		// 실제 체중
			weightMin = stoi(input.substr(0, input.find(' '))) / 2;		// 적정체중의 1/2 초과해야함.
			weighBig = stoi(input.substr(0, input.find(' '))) * 2;		// 적정체중의 2배 미만이여야함.
		}
	}
}

// 펫의 실제 체중이 적정 체중의 1/2배를 초과하면서 적정 체중의 2배 미만이라면 펫은 행복합니다.


/*
100 100
F 10
F 10
E 20
# 0
50 30
F 5
E 20
# 0
0 0

1 :-)
2 :-(

첫 번째 케이스
min = 50
big = 200
두 번째 케이스
min = 25
big = 100
15가 최종 몸무게라서.

*/