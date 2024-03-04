// https://www.acmicpc.net/problem/3733

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        n++;
        cout << m / n << '\n';
    }
}