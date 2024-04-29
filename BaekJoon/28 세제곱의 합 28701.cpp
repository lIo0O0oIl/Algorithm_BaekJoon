// https://www.acmicpc.net/problem/28701

#include <iostream>
using namespace std;

int main()
{
    int n;
    long long m = 0;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        m += i;

    cout << m << '\n';
    int mm = m * m;
    cout << mm << '\n' << mm;
}