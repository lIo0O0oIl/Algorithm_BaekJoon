// https://www.acmicpc.net/problem/15295

#include <iostream>
using namespace std; 

int main()
{
    int n, k, day, count = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> k >> day;
        for (int j = 0; j < day; ++j)
        {
            count += j + 2;
        }
        cout << k << ' ' << count << '\n';
        count = 0;
    }
}