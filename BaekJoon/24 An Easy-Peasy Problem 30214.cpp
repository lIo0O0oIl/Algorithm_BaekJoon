// https://www.acmicpc.net/problem/30214

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    if (m % 2 != 0)
        m += 1;

    if (n >= (m / 2))
        cout << "E";
    else
        cout << "H";
}