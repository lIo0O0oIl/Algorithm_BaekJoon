// https://www.acmicpc.net/problem/32929

#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    n %= 3;
    if (n == 0)
        cout << "S";
    else if (n == 1)
        cout << "U";
    else if (n == 2)
        cout << "O";
}