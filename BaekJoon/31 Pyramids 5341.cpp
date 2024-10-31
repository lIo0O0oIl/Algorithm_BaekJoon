// https://www.acmicpc.net/problem/5341

#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int n, total = 0;
        cin >> n;
        if (n == 0) break;
        for (int i = 1; i <= n; ++i)
        {
            total += i;
        }
        cout << total << '\n';
    }
}