// https://www.acmicpc.net/problem/26209

#include <iostream>
using namespace std;

int main()
{
    int n;
    bool f = false;
    for (int i = 0; i < 8; ++i)
    {
        cin >> n;

        if (n == 9)
            f = true;
    }
    if (f)
        cout << "F";
    else
        cout << "S";
}