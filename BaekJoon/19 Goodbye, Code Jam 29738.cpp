// https://www.acmicpc.net/problem/29738

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; ++i)
    {
        int n;
        cin >> n;

        cout << "Case #" << i << ": ";

        if (n <= 25)
            cout << "World Finals";
        else if (n <= 1000)
            cout << "Round 3";
        else if (n <= 4500)
            cout << "Round 2";
        else
            cout << "Round 1";

        cout << endl;
    }
}