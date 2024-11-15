// https://www.acmicpc.net/problem/31611

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 2)
    {
        cout << 1;
        return 0;
    }
    n -= 2;
    if (n % 7 == 0)
    {
        cout << 1;
        return 0;
    }
    cout << 0;
}