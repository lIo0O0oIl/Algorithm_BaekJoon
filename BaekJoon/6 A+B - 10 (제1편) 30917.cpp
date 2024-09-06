// https://www.acmicpc.net/problem/30917

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    for (int i = 1; i <= 9; ++i)
    {
        cout << "? A " << i << endl;
        cin >> a;

        if (a == 1)
        {
            a = i;

            for (int i = 1; i <= 9; ++i)
            {
                cout << "? B " << i << endl;
                cin >> b;

                if (b == 1)
                {
                    b = i;
                    break;
                }
            }

            break;
        }
    }

    cout << "! " << (a + b);
}