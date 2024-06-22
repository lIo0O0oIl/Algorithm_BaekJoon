// https://www.acmicpc.net/problem/16673

#include <iostream>
using namespace std;

int main()
{
    int c, k, p, sum = 0;
    cin >> c >> k >> p;

    for (int i = 1; i <= c; ++i)
        sum += i * k + ((i * i) * p);

    cout << sum;
}