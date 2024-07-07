// https://www.acmicpc.net/problem/1598

#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int x, y, xWidth, yWidth, xHeight, yHeight;

    cin >> x >> y;

    xWidth = (x - 1) / 4;
    yWidth = (y - 1) / 4;

    xHeight = (x - 1) % 4;
    yHeight = (y - 1) % 4;

    cout << abs(xWidth - yWidth) + abs(xHeight - yHeight);
}