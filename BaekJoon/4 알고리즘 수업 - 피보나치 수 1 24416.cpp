// https://www.acmicpc.net/problem/24416

#include <iostream>
using namespace std;

long long a = 1;

long long fibonacci(long long n)
{
    if (n == 1 || n == 2)
    {
        a++;
        return 1;
    }
    else return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    cin >> n;

    fibonacci(n);

    cout << a - 1 << ' ' << n - 2;
}