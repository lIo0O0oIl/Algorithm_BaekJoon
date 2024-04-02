// https://www.acmicpc.net/problem/25206

#include <iostream>
using namespace std;

int main() {
	string input1, input3;
	double input2, mark = 0, credit = 0;		// mark 은 학점 * 과목평점의 합, credit 은 학점의 총합
	for (int i = 0; i < 20; i++)
	{
		cin >> input1 >> input2 >> input3;		// input2 가 학점, input3 이 등급
		if (input3 == "A+") mark += input2 * 4.5f;		// 학점 * 과목평점 한것을 합해주기
		else if (input3 == "A0") mark += input2 * 4.0f;
		else if (input3 == "B+") mark += input2 * 3.5f;
		else if (input3 == "B0") mark += input2 * 3.0f;
		else if (input3 == "C+") mark += input2 * 2.5f;
		else if (input3 == "C0") mark += input2 * 2.0f;
		else if (input3 == "D+") mark += input2 * 1.5f;
		else if (input3 == "D0") mark += input2 * 1.0f;
		else if (input3 == "P") continue;		// P 는 계산에서 제외
		credit += input2;
	}
	cout << mark / credit;
}