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
			// ���� �ó����� ����� ������ �� �ʱ�ȭ

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
			// �ʱ�Ȯ
			continue;
		}
		else if (input == "0 0") {
			break;
		}

		if (input[0] == 'F') {		// ����
			nowWeight += stoi(input.substr(input.find(" ") + 1));
		}
		else if (input[0] == 'E') {		// ����
			nowWeight -= stoi(input.substr(input.find(" ") + 1));
			if (nowWeight <= 0) {
				die = true;
			}
		}
		else {		// �ó����� �����ϰ� ����ü�߰� ���� ������ ����.
			nowWeight = stoi(input.substr(input.find(' ') + 1));		// ���� ü��
			weightMin = stoi(input.substr(0, input.find(' '))) / 2;		// ����ü���� 1/2 �ʰ��ؾ���.
			weighBig = stoi(input.substr(0, input.find(' '))) * 2;		// ����ü���� 2�� �̸��̿�����.
		}
	}
}

// ���� ���� ü���� ���� ü���� 1/2�踦 �ʰ��ϸ鼭 ���� ü���� 2�� �̸��̶�� ���� �ູ�մϴ�.


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

ù ��° ���̽�
min = 50
big = 200
�� ��° ���̽�
min = 25
big = 100
15�� ���� �����Զ�.

*/