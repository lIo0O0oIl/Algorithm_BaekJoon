// https://www.acmicpc.net/problem/32306

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    a = b = 0;

    for (int i = 1; i <= 3; ++i)
    {
        cin >> c;
        a += c * i;
    }

    for (int i = 1; i <= 3; ++i)
    {
        cin >> c;
        b += c * i;
    }

    if (a > b)
        cout << "1";
    else if (a < b)
        cout << "2";
    else
        cout << "0";
}