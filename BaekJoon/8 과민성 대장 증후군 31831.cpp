// https://www.acmicpc.net/problem/31831

#include <iostream>
using namespace std;

int main()
{
    int n, m, k, sum, cnt;
    sum = cnt = 0;
    cin >> n >> m;

    for (int i = 0; i < n; ++i)
    {
        cin >> k;
        if (sum + k > 0)
            sum += k;
        else
            sum = 0;

        if (sum >= m)
            cnt++;
    }

    cout << cnt;
}