// https://www.acmicpc.net/problem/1009

#include <iostream>
using namespace std;

int main() {
    int t, a, b, mul;
    cin >> t;

    while (t--) {
        mul = 1;
        cin >> a >> b;

        b = !(b % 4) ? 4 : b % 4;           // 4�� ������ �������� ������ B �� 4�� �ϰ� ������ 4�� �����ش�.

        while (b--) mul *= a;       // b ��ŭ a �� �����ش�.

        cout << (mul % 10 ? mul % 10 : 10) << '\n';     // 10���� ������ ���� ������ 10���� ������ ������ 10�� �����.
    }
}