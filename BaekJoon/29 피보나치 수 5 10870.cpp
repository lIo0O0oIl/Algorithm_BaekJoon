// https://www.acmicpc.net/problem/10870

#include <iostream>
#include <string>
using namespace std;

int f(int n)
{

    if (n >= 2)
        return n = f(n - 1) + f(n - 2);
    else
        return n;
}

int main()
{
    int num;
    cin >> num;
    cout << f(num);
}