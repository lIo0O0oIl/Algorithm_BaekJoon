// https://www.acmicpc.net/problem/2501

#include<iostream>
using namespace std;

int main()
{
    int n, k;
    int cnt = 0, j = 0;     // j�� K ��°���� ���ϱ� ���ؼ�
    int a[10000];

    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {       // �̰� �ɸ��� ������ ��.
            a[j] = i;
            j++;
            cnt++;
        }
    }

    if (cnt >= k)
        cout << a[k - 1];
    else
        cout << 0;
}