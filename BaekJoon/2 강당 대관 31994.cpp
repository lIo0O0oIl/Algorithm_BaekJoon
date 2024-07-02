// https://www.acmicpc.net/problem/31994

#include <iostream>
using namespace std;

int main()
{
    string s, d;
    int n, m = 0;

    for (int i = 0; i < 7; ++i)
    {
        cin >> s >> n;
        if (n >= m)
        {
            m = n;
            d = s;
        }
    }

    cout << d;
}