// https://www.acmicpc.net/problem/29546

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    string arr[1001];

    cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cin >> m;

    for (int i = 0; i < m; ++i)
    {
        int x, y;
        cin >> x >> y;

        for (int j = x; j <= y; ++j)
            cout << arr[j - 1] << '\n';
    }
}

// ¬¶¬Ñ¬Û¬Ý¬í = ÆÄÀÏ