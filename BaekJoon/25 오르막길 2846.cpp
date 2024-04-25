// https://www.acmicpc.net/problem/2846

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t, n, m = 0;
    vector<int> vec;
    vector<int> upRoad;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        cin >> n;
        vec.push_back(n);
    }

    for (int i = 1; i < t; ++i)
    {
        if (vec[i - 1] < vec[i])
            m += vec[i] - vec[i - 1];
        else
            m = 0;
        upRoad.push_back(m);
    }

    sort(upRoad.begin(), upRoad.end());
    cout << upRoad.back();
}