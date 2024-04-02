// https://www.acmicpc.net/problem/2010

#include <iostream>
using namespace std;

int main() {
    int n, m, cnt = 0; // 멀티탭의 수, 꽂을 수 있는 구멍 수, 총 연결할 수 있는 개수
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> m;
        cnt += m - 1; // 총 개수는 꽂을 수 있는 구멍에서 -1 한 수
    }

    cout << cnt + 1; // 마지막 멀티탭은 다 꽂을 수 있어서 + 1
}