// https://www.acmicpc.net/problem/7662

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int>    bigQ;        // 내림차순
    priority_queue<int, vector<int>, greater<int>> smallQ;        // 오름차순
    string sInput;
    long long t, k, llInput;

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            cin >> sInput >> llInput;
            if (sInput == "D" && llInput == 1)
            {
                if (!bigQ.empty()) bigQ.pop();
            }
            else if (sInput == "D" && llInput == -1)
            {
                if (!smallQ.empty()) smallQ.pop();
            }
            else if (sInput == "I")
            {
                bigQ.push(llInput);
                smallQ.push(llInput);
            }
        }

        if (bigQ.empty() && smallQ.empty()) cout << "EMPTY" << '\n';
        else
        {
            cout << bigQ.top() << ' ' << smallQ.top() << '\n';
        }

        while (!bigQ.empty()) bigQ.pop();
        while (!smallQ.empty()) smallQ.pop();
    }
}


/*
*
7
I 16
I -5643
D -1
D 1
D 1
I 123
D -1

-5643 16 123
123 16 -5643
작은거 2번
큰거 2번

빅 : 16 -5643
스몰 : -5643 16
= -1(최소값) -5643 삭제

2개의 명령으로 인해서
빅 없음
스몰 없음. 16도 사라지니까

123
123
스몰 삭제 하면서 빅이 살아남게됨. 사라져야 하는데.

123
123 남음

하쉬 어렵네

자료구조, 트리를 사용한 집합과 맵 이면 트리쓰겠내ㅔ ㅎㅅㅎㅅㅎ
이 씌발 트리 공부 다시해야하넹넹 ㅇ

*/