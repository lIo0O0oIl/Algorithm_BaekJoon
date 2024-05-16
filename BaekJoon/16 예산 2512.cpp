// https://www.acmicpc.net/problem/2512

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, have;
vector<int> vec;

int BinarySearch(int start, int end)
{
    int left = start;
    int right = end;
    int mid, sum;

    while (left <= right)
    {
        sum = 0;
        mid = (left + right) / 2;

        for (int v : vec)
        {
            if (v > mid)
                sum += mid;
            else
                sum += v;
        }

        if (sum == have)
            return mid;
        else if (sum >= have)
            right = mid - 1;
        else
            left = mid + 1;
    }

    if (sum > have)
        return mid - 1;
    return mid;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int m;
        cin >> m;
        vec.push_back(m);
    }
    cin >> have;

    sort(vec.begin(), vec.end());

    int sum = 0;
    for (int v : vec)
        sum += v;

    if (sum <= have)
        cout << vec.back();
    else
        cout << BinarySearch(1, vec.back());
}