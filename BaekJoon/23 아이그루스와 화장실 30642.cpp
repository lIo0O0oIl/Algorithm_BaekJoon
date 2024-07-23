// https://www.acmicpc.net/problem/30642

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    string name;

    cin >> n >> name >> m;

    if (name == "induck")
    {
        if (m % 2 == 0)
            cout << m;
        else
        {
            if (m + 1 > n)
                cout << m - 1;
            else
                cout << m + 1;
        }
    }
    else
    {
        if (m % 2 != 0)
            cout << m;
        else
        {
            if (m + 1 > n)
                cout << m - 1;
            else
                cout << m + 1;
        }
    }
}