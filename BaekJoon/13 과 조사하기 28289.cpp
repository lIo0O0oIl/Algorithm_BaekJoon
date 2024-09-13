// https://www.acmicpc.net/problem/28289

#include <iostream>
using namespace std;

int main()
{
    int t, n, m, k;
    int soft, imbdsoft, aisoft, one;
    soft = imbdsoft = aisoft = one = 0;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        cin >> n >> m >> k;
        if (n == 1)
        {
            one++;
            continue;
        }
        else
        {
            switch (m)
            {
            case 1:
            case 2:
                soft++;
                break;
            case 3:
                imbdsoft++;
                break;
            case 4:
                aisoft++;
                break;
            }
        }
    }

    cout << soft << endl << imbdsoft << endl << aisoft << endl << one;
}