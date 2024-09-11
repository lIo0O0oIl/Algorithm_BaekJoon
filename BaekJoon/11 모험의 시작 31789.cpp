// https://www.acmicpc.net/problem/31789

#include <iostream>
using namespace std;

int main()
{
    int n, money, damage;

    cin >> n;
    cin >> money >> damage;

    for (int i = 0; i < n; ++i)
    {
        int cost, dmg;
        cin >> cost >> dmg;

        if (cost <= money && dmg > damage)
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
}