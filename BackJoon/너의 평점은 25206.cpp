// https://www.acmicpc.net/problem/25206

#include <iostream>
using namespace std;

int main() {
	string input1, input3;
	float input2, mark = 0, credit = 0;		// mark �� ���� * ���������� ��, credit �� ������ ����
	for (int i = 0; i < 20; i++)
	{
		cin >> input1 >> input2 >> input3;		// input2 �� ����, input3 �� ���
		credit += input2;
		if (input3 == "A+") mark += input2 * 4.5f;		// ���� * �������� �Ѱ��� �����ֱ�
		else if (input3 == "A0") mark += input2 * 4.0f;
		else if (input3 == "B+") mark += input2 * 3.5f;
		else if (input3 == "B0") mark += input2 * 3.0f;
		else if (input3 == "C+") mark += input2 * 2.5f;
		else if (input3 == "C0") mark += input2 * 2.0f;
		else if (input3 == "D+") mark += input2 * 1.5f;
		else if (input3 == "D0") mark += input2 * 1.0f;
		else if (input3 == "F") mark += input2 * 0.0f;
	}
	cout << mark / credit;
}



/*



*/