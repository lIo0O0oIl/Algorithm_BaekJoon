// https://www.acmicpc.net/problem/11005

#include <iostream>
#include <string>
using namespace std;

int main() {
	long long n;		// 10 ����
	int b;		// ����
	string answer = "";
	cin >> n >> b;

	while (true)
	{
		if (n % b >= 10)		// ���ڿ��� �ֱ�
		{
			answer += (char)(n % b + 55);
		}
		else
		{
			answer += to_string(n % b);
		}

		if (n / b)
		{
			n /= b;
		}
		else
		{
			break;
		}
	}

	for (int i = answer.size() - 1; i >= 0; --i)
	{
		cout << answer[i];
	}
}


/*
8 2
1000

4
2
1

*/