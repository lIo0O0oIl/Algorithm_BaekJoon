// https://www.acmicpc.net/problem/24079

#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    cout << (x + y > z ? 0 : 1);
}