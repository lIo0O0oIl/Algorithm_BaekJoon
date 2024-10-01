// https://www.acmicpc.net/problem/31821

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t, n, sum = 0;
    vector<int> costs;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        int k;
        cin >> k;
        costs.push_back(k);
    }

    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int k;
        cin >> k;
        sum += costs[k - 1];
    }

    cout << sum;
}