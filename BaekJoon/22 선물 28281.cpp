// https://www.acmicpc.net/problem/28281

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    long long answer = 0;

    cin >> n >> m;

    int* arr;
    arr = new int[n];

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    for (int i = 0; i < n - 1; ++i)
    {
        if (answer == 0)
            answer = arr[i] * m + arr[i + 1] * m;
        else
            answer = min(answer, (long long)arr[i] * m + arr[i + 1] * m);
    }

    answer = min(answer, (long long)arr[n - 2] * m + arr[n - 1] * m);

    cout << answer;
}