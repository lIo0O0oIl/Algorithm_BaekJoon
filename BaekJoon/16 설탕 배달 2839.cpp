// https://www.acmicpc.net/problem/2839

#include <iostream>
using namespace std;

int main()
{
    int n, m, cnt = 0;
    cin >> n;
    bool tt = false;

    m = n;

    for (int i = n / 5; i > 0; i--)
    {
        n = m;
        n = n - (5 * i);
        if (n == 0)
        {
            cnt = m / 5;
            tt = true;
            break;
        }
        else if (n % 3 == 0)
        {
            cnt = i + (n / 3);
            tt = true;
            break;
        }
    }

    if (m % 3 == 0 && tt == false)
    {
        cnt = m / 3;
        tt = true;
    }

    if (tt == false)
        cout << -1;
    else
        cout << cnt;
}