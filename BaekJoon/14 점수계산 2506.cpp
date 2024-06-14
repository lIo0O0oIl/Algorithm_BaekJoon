// https://www.acmicpc.net/problem/2506

#include <iostream>
using namespace std;

int main()
{
    int n, m, k, l = 0;
    int sum = 0;
    cin >> n;
    m = 0;

    for (int i = 0; i < n; ++i)
    {
        k = m;
        cin >> m;

        if (m == 1)
        {
            if (k == 0)
                l = 1;
            else
                l++;

            sum += l;
        }
    }

    cout << sum;
}