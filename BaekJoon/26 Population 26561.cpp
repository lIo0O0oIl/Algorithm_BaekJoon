// https://www.acmicpc.net/problem/26561

#include <iostream>
using namespace std;

int main()
{
    long long n, p, t;
    cin >> n;
    for (long long i = 0; i < n; ++n)
    {
        cin >> p >> t;
        cout << p + (t / 4 - t / 7) << '\n';
    }
}