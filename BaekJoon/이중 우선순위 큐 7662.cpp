// https://www.acmicpc.net/problem/7662

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int>    bigQ;        // ��������
    priority_queue<int, vector<int>, greater<int>> smallQ;        // ��������
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
������ 2��
ū�� 2��

�� : 16 -5643
���� : -5643 16
= -1(�ּҰ�) -5643 ����

2���� ������� ���ؼ�
�� ����
���� ����. 16�� ������ϱ�

123
123
���� ���� �ϸ鼭 ���� ��Ƴ��Ե�. ������� �ϴµ�.

123
123 ����

�Ͻ� ��Ƴ�

�ڷᱸ��, Ʈ���� ����� ���հ� �� �̸� Ʈ�����ڳ��� ����������
�� ���� Ʈ�� ���� �ٽ��ؾ��ϳ߳� ��

*/