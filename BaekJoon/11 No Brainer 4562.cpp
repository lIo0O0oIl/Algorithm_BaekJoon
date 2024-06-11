// https://www.acmicpc.net/problem/4562

#include <iostream>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> a >> b;
        if (a < b)
            cout << "NO BRAINS" << '\n';
        else if (a == b || a > b)
            cout << "MMM BRAINS" << '\n';
    }
}