// https://www.acmicpc.net/problem/17874

#include <iostream>
using namepace std;

int main()
{
    int n, h, v;
    cin >> n >> h >> v;
    if (h < n) h = n - h;
    if (v < n) v = n - v;
    cout << h * v * 4;
}