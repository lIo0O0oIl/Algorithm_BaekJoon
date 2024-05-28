// https://www.acmicpc.net/problem/1673

#include <iostream>
using namespace std;

int main()
{
    int n, k;
    int meat, stamp;
    while (cin >> n >> k)
    {
        meat = 0;
        stamp = 0;

        while (1)
        {
            meat += n;
            stamp += n;

            n = 0;
            n += stamp / k;

            stamp = stamp % k;

            if (n == 0)
                break;
        }

        cout << meat << endl;
    }
}