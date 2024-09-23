// https://www.acmicpc.net/problem/32184

#include <iostream>
using namespace std;

int main()
{
    int n, m, k = 0;
    int sum = 0;
    cin >> n >> m;

    if (n % 2 == 0)
    {
        n++;
        sum++;
    }
    k += m - n + 1;
    cout << sum + k / 2 + k % 2;
}