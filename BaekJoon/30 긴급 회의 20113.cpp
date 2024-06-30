// https://www.acmicpc.net/problem/20113

#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n, m;
    int inx, k;
    bool t = false;
    map<int, int> map;

    cin >> n;
    inx = k = 1;

    for (int i = 0; i < n; ++i)
    {
        cin >> m;
        if (m != 0)
            map[m]++;
    }

    for (int i = 0; i <= n; ++i)
    {
        if (k < map[i])
        {
            inx = i;
            k = map[i];
        }
    }

    for (int i = 0; i <= n; ++i)
    {
        if (k == map[i] && inx != i)
            t = true;
    }

    if (t)
        cout << "skipped";
    else
        cout << inx;
}