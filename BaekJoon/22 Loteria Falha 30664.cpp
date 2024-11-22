// https://www.acmicpc.net/problem/30664

#include <iostream>
using namespace std;

int main()
{
    string n;

    while (true)
    {
        cin >> n;

        if (n == "0")
            break;
        else
        {
            int m = 0;
            for (char c : n)
                m = (m * 10 + (c - '0')) % 42;
            cout << (m == 0 ? "PREMIADO" : "TENTE NOVAMENTE") << endl;
        }
    }
}