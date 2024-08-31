// https://www.acmicpc.net/problem/28453

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> m;

        if (m >= 300)
            cout << "1 ";
        else if (275 <= m && m < 300)
            cout << "2 ";
        else if (250 <= m && m < 275)
            cout << "3 ";
        else
            cout << "4 ";
    }
}