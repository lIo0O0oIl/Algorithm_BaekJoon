// https://www.acmicpc.net/problem/26545

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int m;
        cin >> m;
        sum += m;
    }

    cout << sum;
}