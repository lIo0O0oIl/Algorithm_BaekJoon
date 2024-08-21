// https://www.acmicpc.net/problem/10995

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 1)
            cout << " ";

        for (int j = 0; j < n; j++)
            cout << "* ";

        cout << endl;
    }
}