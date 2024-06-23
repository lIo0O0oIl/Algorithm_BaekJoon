// https://www.acmicpc.net/problem/25497

#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int n, count = 0;
	string input;
	stack<char> lr, sk;
	cin >> n;
	cin >> input;
	for (int i = 0; i < n; i++)
	{
		if (input[i] == 'L')
		{
			lr.push(input[i]);
		}
		else if (input[i] == 'R')
		{
			if (!lr.empty() && lr.top() == 'L')
			{
				lr.pop();
				count++;
			}
			else
			{
				break;
			}
		}
		else if (input[i] == 'S')
		{
			sk.push(input[i]);
		}
		else if (input[i] == 'K')
		{
			if (!sk.empty() && sk.top() == 'S')
			{
				sk.pop();
				count++;
			}
			else
			{
				break;
			}
		}
		else
		{
			count++;
		}
	}
	cout << count;
}


/*


LR - SK

L을 사용하고 S를 사용한 뒤에 R을 사용해도 기술은 정상적으로 발동합니다.


//반례2 입력
4
1K23

//정답
1

만약 본 기술을 연계기술 없이 사용하면 뒷 기술들은 무효 연계기술의 어쩌고를 알아야함.

*/