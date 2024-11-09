// https://www.acmicpc.net/problem/24723

#include <iostream>
using namespace std;

int main()
{
    int n, num = 1;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
       num *= 2;
    }
    cout << num;
}