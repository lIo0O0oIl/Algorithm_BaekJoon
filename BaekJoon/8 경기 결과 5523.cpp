// https://www.acmicpc.net/problem/5523

#include <iostream>
using namespace std;

int main()
{
    int t, a, b, aa = 0, bb = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        if (a > b) aa++;
        else if (a < b) bb++;
    }
    cout << aa << ' ' << bb;
}