// https://www.acmicpc.net/problem/1966

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

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
			cout << input;
			sortVec.push_back(input);
			print.push(input);
			if (j + 1 == m) my = input;		// 내 문서의 중요도 가져오기
		}

		sort(sortVec.begin(), sortVec.end());
		for (int j = 0; j < sortVec.size(); j++)
		{
			sortPrint.push(sortVec[j]);
		}

		while (!print.empty())		// 프린터가 빌 때까지
		{
			if (print.front() == sortPrint.front())		// 앞에꺼가 정렬된 큐랑 같니?
			{
				//if (print.front() == )
			}
		}
	}
}

// 중요도가 중복일 때의 처리를 생각해야함.