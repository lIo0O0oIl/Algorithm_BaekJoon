// https://www.acmicpc.net/problem/1966

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

bool com(int a, int b)
{
	return a > b;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int t, n, m, input;		// 테스트 케이스, 문서의 개수, 찾는 문서 인덱스, 문서 입력 받기 변수
	int my, answer = 0;			// 내 문서의 중요도, 출력 순서
	queue<int> print, sortPrint;
	vector<int> sortVec;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> n >> m;
		for (int j = 0; j < n; j++)
		{
			cin >> input;
			sortVec.push_back(input);
			print.push(input);
			if (j == m)
			{
				my = input;		// 내 문서의 중요도 가져오기
			}
		}

		sort(sortVec.begin(), sortVec.end(), com);
		for (int j = 0; j < sortVec.size(); j++)
		{
			sortPrint.push(sortVec[j]);
		}

		while (!print.empty())		// 프린터가 빌 때까지
		{
			if (print.front() == sortPrint.front())		// 앞에꺼가 정렬된 큐랑 같니?
			{
				m--;
				answer++;
				if (print.front() == my && m == -1) break;
				if (m == -1) m = print.size() - 1;
				print.pop();
				sortPrint.pop();		// 서로 다 빼주기
			}
			else
			{
				print.push(print.front());
				print.pop();
				m--;
				if (m == -1) m = print.size() - 1;
			}

			//for (int j = 0; j < print.size(); j++)
			//{
			//	cout << print.front() << " ";
			//	print.push(print.front());
			//	print.pop();
			//}
			//cout << endl;
		}

		cout << answer << '\n';

		answer = 0;
		while (!print.empty())
		{
			print.pop();
		}
		while (!sortPrint.empty())
		{
			sortPrint.pop();
		}
		sortVec.clear();
	}
}

// 중요도가 중복일 때의 처리를 생각해야함.

/*
일단 정렬이 되어있을 떄


4 2
1 2 3 4
= 2 (3번째 문서가 몇 번째로 출력이 되는가)
인 상황에서 백터로 정렬을 하면 두 큐에서는
4 3 2 1(중요도)
1 2 3 4(서류 번호)
= now 
앞에꺼가 맞을 때만 돌리기를 하다가 now 가 -0이 되면

저거에 대한 검증이 필요함

1 2 3 4		찾으려는 문서의 중요도는 3, 위치는 2
2 3 4 1		위치 1
3 4 1 2		위치 0
4 1 2 3		위치 -1이여서 print.size() - 1; 넣어줌. 위치 3
1 2 3			4빼주고 위치 2
2 3 1			위치 1
3 1 2			위치 0
1 2			3 뺐는데 문서의 중요도와 같음. 위치도 -1;

*/