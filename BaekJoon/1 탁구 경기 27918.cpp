// https://www.acmicpc.net/problem/27918

#include <iostream>
using namespace std;

int main()
{
    int n, d, p;
    d = p = 0;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        char name;
        cin >> name;

        if (name == 'D')
            d++;
        else
            p++;

        if (d - p >= 2 || p - d >= 2)
        {
            cout << d;
            cout << ":";
            cout << p;
            return 0;
        }
    }

    cout << d;
    cout << ":";
    cout << p;
}