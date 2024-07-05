// https://www.acmicpc.net/problem/31868

#include <iostream>
using namespace std;

int main()
{
    int n, k;
    int r = 1;
    cin >> n >> k;

    for (int i = 0; i < n - 1; ++i)
    {

        if (r == 1)
            r = 2;
        else
            r = (r * 2);
    }

    cout << k / r;
}