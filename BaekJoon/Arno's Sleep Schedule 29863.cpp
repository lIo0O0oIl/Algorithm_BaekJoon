// https://www.acmicpc.net/problem/29863

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    if (n >= 0 && n <= 3)
        cout << m - n;
    else
        cout << (24 - n) + m;
}