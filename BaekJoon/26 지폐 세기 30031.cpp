// https://www.acmicpc.net/problem/30031

#include <iostream>
using namespace std;

int main()
{
    int t, n, m, sum = 0;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        cin >> n >> m;

        switch (n)
        {
        case 136:
            sum += 1000;
            break;
        case 142:
            sum += 5000;
            break;
        case 148:
            sum += 10000;
            break;
        case 154:
            sum += 50000;
            break;
        }
    }

    cout << sum;
}