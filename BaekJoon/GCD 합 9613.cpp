// https://www.acmicpc.net/problem/9613

#include<iostream>

using namespace std;

int gcd(int x, int y)
{
    if (x % y == 0) return y;
    else return gcd(y, x % y);
}

int main()
{
    int t, n;
    long long n_arr[101] = { 0 };
    long long sum[101] = { 0 };

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> n_arr[j];
        }
        for (int k = 0; k < n; k++)
        {
            for (int p = k + 1; p < n; p++)
            {
                sum[i] += gcd(n_arr[k], n_arr[p]);
            }
        }
    }

    for (int i = 0; i < t; i++)
    {
        cout << sum[i] << "\n";
    }
}