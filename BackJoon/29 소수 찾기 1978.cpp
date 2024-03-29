// https://www.acmicpc.net/problem/1978

#include <iostream>
using namespace std;

int main() {
	int n, input, answer = 0;
	bool is_Prime = false;		// 소수 확인
	cin >> n;
	for (int j = 0; j < n; j++)
	{
		cin >> input;
		if (input == 1) continue;
		if (input == 2) is_Prime = true;		// 1 과 2 일때 미리 확인
		for (int j = 2; j < input; j++)
		{
			if (input % j == 0)
			{
				is_Prime = false;
				break;
			}
			else is_Prime = true;
		}		// 자기 자신까지 가는 숫자중에서 
		if (is_Prime) answer++;
		is_Prime = false;
	}
	cout << answer;
}