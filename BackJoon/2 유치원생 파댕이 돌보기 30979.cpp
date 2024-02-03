// https://www.acmicpc.net/problem/30979

#include <iostream>
using namespace std;

int main()
{
    int t, n, f;
    cin >> t >> n;
    while (n--)
    {
        cin >> f;
        t -= f;
    }

    cout << "Padaeng_i ";

    if (t > 0)
    {
        cout << "Cry";
    }
    else
    {
        cout << "Happy";
    }
}