// https://www.acmicpc.net/problem/32498

#include <iostream>
using namespace std;

int main()
{
    int n, m, sum = 0;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> m;
        if (m % 2 != 0)
            sum++;
    }

    cout << sum;
}