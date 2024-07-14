// https://www.acmicpc.net/problem/32025

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    if (n >= m)
        cout << (m * 100) / 2;
    else
        cout << (n * 100) / 2;
}