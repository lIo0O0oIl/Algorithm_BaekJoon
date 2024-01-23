// https://www.acmicpc.net/problem/24511

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, input, m, now = 0;
	int queuestack[100001] = { 0 };
	vector<int> v;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		v.push_back(input);
	}
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		queuestack[i] = input;
	}

	cin >> m;

	for (int j = 0; j < n; j++)
	{
		cout << queuestack[j] << " ";
	}		// 디버그용

	for (int i = 0; i < m; i++)
	{
		cin >> input;
		for (int j = 0; j < n; j++)
		{
			if (v[j] == 0) {		// 큐라면
				now = queuestack[j];		// 기존에 있던 것 pop
				if (queuestack[j + 1] == 1)
				{
					queuestack[j + 1] = queuestack[j];
				}
				queuestack[j] = input;		// 나는 새로 입력 받은 것
			}
			else {
				if (queuestack[j + 1] == 1)
				{
					queuestack[j + 1] = queuestack[j];
				}
				now = queuestack[j];	// 나 자신 바로 넣어주기
			}
		}

		cout << endl << now << endl;		// 고쳐주기
		for (int j = 0; j < n; j++)
		{
			cout << queuestack[j] << " ";
		}		// 디버그용
	}
}


/*
* 
1		큐
2		스택
3		스택			선입후출
4		큐				선입선출
				1 2 3 4

2	삽입
1 2		2 넣고 1 빼고
2 1		1 넣고 1 빼고
3 1		1 넣고 1 빼고
4 1		1 넣고 4 빼고
= 4			2 2 3 1

4	삽입
2 4		4 넣고 2 빼고
2 2		2 넣고 2 빼고
3 2		2 넣고 2 빼고
1 2		2 넣고 1 빼고
= 1			4 2 3 2

7 삽입
4 7		7 넣고 4 빼고
2 2		2 넣고 4 뺴고
3 2		2 넣고 4 뺴고
2 4		4 넣고 2빼고
= 2			7 2 3 4

= 4 1 2
*/