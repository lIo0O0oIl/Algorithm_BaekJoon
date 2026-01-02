// https://www.acmicpc.net/problem/2559

#include <iostream>
using namespace std;

int arr[100001];
int accumulate[100001]; 

int main()
{
    int n, k, big = -10000001;
    cin >> n >> k;

    for (int i = 1; i <= n; ++i)
    {
        cin >> arr[i];
        accumulate[i] = accumulate[i - 1] + arr[i];
    }

    for (int i = k; i <= n; ++i)
    {
        if (big < accumulate[i] - accumulate[i - k])
        {
            big = accumulate[i] - accumulate[i - k];
        }
    }

    cout << big;
}