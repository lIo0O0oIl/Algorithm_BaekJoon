//https://www.acmicpc.net/problem/10707

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, p;
    int x, y;

    cin >> a >> b >> c >> d >> p;

    x = a * p;

    if (p > c)
        y = (p - c) * d + b;
    else
        y = b;

    if (x < y)
        cout << x;
    else
        cout << y;
}